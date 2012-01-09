#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iterator>

using namespace std;

unsigned int myMaximum (unsigned int a[], unsigned int size = 4) {
    unsigned int aMax = a[0];
    for (unsigned int i = 1; i < size; ++i) {
        aMax = max(a[i], aMax);
    }
    
    return aMax;
}

unsigned int mySum (unsigned int a[], unsigned int size) {
    unsigned int sum = a[0];
    for (unsigned int i = 1; i < size; ++i) {
        sum += a[i];
    }
    
    return sum;
}

int main () {
    FILE* inFile = fopen("dna.in", "r");
    ofstream outFile ("dna.out");

    if (NULL == inFile) {
        cerr << "main::fopen[in]" << endl;
        exit(EXIT_FAILURE);
    }
    if (NULL == outFile) {
        cerr << "main::fopen[out])" << endl;
        exit(EXIT_FAILURE);
    }
    
    unsigned int N, K, minSwaps;
    fscanf(inFile, "%u %u\n", &N, &K);

    char *p, *inSeq = (char*) calloc((N + 1), sizeof(char));
    fscanf(inFile, "%s", inSeq);
    
    // Char-to-int conversion
    unsigned int decSeq[N];
    p = inSeq;
    for (unsigned int i = 0; i < N; ++i, ++p) {
        switch (*p) {
            case 'A':
                decSeq[i] = 0;
                break;
            case 'C':
                decSeq[i] = 1;
                break;
            case 'G':
                decSeq[i] = 2;
                break;
            case 'T':
                decSeq[i] = 3;
                break;
            default:
                exit(EXIT_FAILURE);
        }
    }
    
    // Zero-initialise
    unsigned int stat[K][5], max[K];
    for (unsigned int i = 0; i < K; ++i) {
        fill(stat[i], stat[i] + 5, 0);
    }
    fill(max, max + K, 0);
    
    // 1st-iteration
    for (unsigned int i = 0; i < N; ++i) {
        stat[i%K][decSeq[i]]++; // which char       
        stat[i%K][4]++;         // period subset count 
    }
    
    for (unsigned int i = 0; i < K; ++i) {
        max[i] = stat[i][4] - myMaximum(stat[i], 4);
    }
    minSwaps = mySum(max, K);

    // Rest iterations
    for (unsigned int k = K - 1; k > 0; --k) {
        // Zero-initialise
        for (unsigned int i = 0; i < k; ++i) {
            fill(stat[i], stat[i] + 5, 0);
        }
        fill(max, max + k, 0);
        
        for (unsigned int i = 0; i < N; ++i) {
            stat[i%k][decSeq[i]]++; // which char       
            stat[i%k][4]++;         // period subset count 
        }
    
        for (unsigned int i = 0; i < k; ++i) {
            max[i] = stat[i][4] - myMaximum(stat[i], 4);
        }
        minSwaps = min(minSwaps, mySum(max, k));
    }

    outFile << minSwaps << endl;

    fclose(inFile);
    outFile.close();

    return EXIT_SUCCESS;
}
