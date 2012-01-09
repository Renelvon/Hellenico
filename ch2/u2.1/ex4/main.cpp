#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iterator>

using namespace std;

int main() {
    ifstream inFile ("mastermind.in");
    ofstream outFile ("mastermind.out");

    if (NULL == inFile) {
        cerr << "main::fopen[in]" << endl;
        exit(EXIT_FAILURE);
    }
    if (NULL == outFile) {
        cerr << "main::fopen[out])" << endl;
        exit(EXIT_FAILURE);
    }
    
    unsigned int N, M, K; 
    inFile >> N >> M >> K;
    
    const unsigned int maxN = 10, maxK = 5;
    unsigned int tries[maxN][maxK], check[maxN][2];

    for (unsigned int i = 0; i < N; ++i) {
        for (unsigned int j = 0; j < K; ++j) {
            inFile >> tries[i][j];
        }
        inFile >> check[i][0] >> check[i][1];
    }
    
    unsigned int test[maxK], compSeq = 0, testC0, testC1;
    fill(test, test + K, 1);
    bool isNew, isValid, auxTest[maxK], auxTry[maxK];
    
    do {
        isValid = true;
        for (unsigned int i = 0; isValid && (i < N); ++i) {
            testC1 = testC0 = 0;
            fill(auxTest, auxTest + K, true);
            fill(auxTry , auxTry  + K, true);
            for (unsigned int j = 0; j < K; ++j) {
                if (tries[i][j] == test[j]) {
                    ++testC0;
                    auxTest[j] = auxTry[j] = false;
                }
            }
            
            if (testC0 != check[i][0]) {
                isValid = false;
                break;
            }
            
            for (unsigned int j = 0; j < K; ++j) {
                for (unsigned int k = 0; k < K; ++k) {
                    if (tries[i][k] == test[j] && auxTry[k] && auxTest[j]) {
                        ++testC1;
                        auxTry[k] = auxTest[j] = false;
                        break;
                    }
                }
            }

            if (testC1 != check[i][1]) {
                isValid = false;
                break;
            }

        }
        
        if (isValid) {
            compSeq++;
        }

        isNew = false;
        for (unsigned int i = 0; i < K; ++i) {
            if (test[i] < M) {
                test[i]++;
                isNew = true;
                break;
            } else {
                test[i] = 1;
            }
        }
    } while (isNew);

    outFile << compSeq << endl;

    inFile.close();
    outFile.close();

    return EXIT_SUCCESS;
}
