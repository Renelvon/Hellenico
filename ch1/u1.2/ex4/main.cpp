#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iterator>

using namespace std;

int main () {
    ifstream inFile ("sort3.in");
    ofstream outFile ("sort3.out");

    if (NULL == inFile) {
        cerr << "main::fopen[in]" << endl;
        exit(EXIT_FAILURE);
    }
    if (NULL == outFile) {
        cerr << "main::fopen[out])" << endl;
        exit(EXIT_FAILURE);
    }

    unsigned int N;
    
    inFile >> N;
    
    unsigned int numArr[N], numCount[4] = {0, 0, 0, 0};

    for (unsigned int i = 0, n; i < N; ++i) {
        inFile >> n;
        numArr[i] = n;
        ++numCount[n];
    }
    
    unsigned int nSwaps = 0, numRanges[3];
    
    numRanges[1] = numCount[1];
    numRanges[2] = numCount[1] + numCount[2];
   
    unsigned int numPlaces[4][4] = { 
                    {0, 0, 0, 0},
                    {0, 0, 0, 0},
                    {0, 0, 0, 0} };
    for (unsigned int i = 0 ; i < N; ++i) {
        if (i < numRanges[1])
            numPlaces[1][numArr[i]]++;
        else if (i < numRanges[2])
            numPlaces[2][numArr[i]]++;
        else
            numPlaces[3][numArr[i]]++;
    }
    

    // 0th-order swaps
    for (unsigned int i = 1; i < 4; ++i) {
        numPlaces[i][i] = 0;
    }

    // 1st-order swaps
    for (unsigned int i = 1; i < 4; ++i) {
        for (unsigned int minS, j = i + 1; j < 4; ++j) {
            minS = min(numPlaces[i][j], numPlaces[j][i]);
            numPlaces[i][j] -= minS;
            numPlaces[j][i] -= minS;
            nSwaps += minS;
        }
    }

    // 2nd-order swaps
    for (unsigned int i = 1; i < 4; ++i) {
        nSwaps += 2 * numPlaces[1][i];
    }

    outFile << nSwaps << endl;
    
    inFile.close();
    outFile.close();
    
    return EXIT_SUCCESS;
}
