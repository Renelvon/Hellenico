#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iterator>

using namespace std;

int main() {
    ifstream inFile  ("nered.in");
    ofstream outFile ("nered.out");

    if (NULL == inFile) {
        cerr << "main::fopen[in]" << endl;
        exit(EXIT_FAILURE);
    }
    if (NULL == outFile) {
        cerr << "main::fopen[out])" << endl;
        exit(EXIT_FAILURE);
    }
    
    int N, M;
    inFile >> N >> M;

    int pSum[N + 1][N + 1]; // padding to avoid subsequent bound checking
    for (int i = 0; i < N + 1; ++i) {
        fill(pSum[i], pSum[i] + N + 1, 0);
    }

    for (int i = 0, x, y; i < M; ++i) {
        inFile >> x >> y;
        pSum[x][y] = 1;
    }

    for (int i = 2; i < N + 1; ++i) {
       pSum[1][i] += pSum[1][i - 1];
    }

    for (int i = 2, n; i < N + 1; ++i) {
        n = 0; // current row sum
        for (int j = 1; j < N + 1; ++j) {
            n += pSum[i][j];
            pSum[i][j] = pSum[i - 1][j] + n;
        }   
    }

    bool divid[N + 1];
    fill(divid, divid + N + 1, true);
    divid[0] = false;
    for (int i = 2; i < N + 1; ++i) {
        if (divid[i] && (M % i == 0) ) {
                // do nothing
        } else {
            for (int j = i; j < N + 1; j += i) {
                divid[j] = false;
            }
        }
    }

    int maxCubes = 0;
    for (int strideX = 1, strideY; strideX < N + 1; ++strideX) {
        if (divid[strideX]) {
            strideY = M / strideX;
            for (int i = 0, iL = strideY; iL < N + 1; ++i, ++iL) {
                for (int j = 0, jL = strideX; jL < N + 1; ++j, ++jL) {
                    maxCubes = max(maxCubes,
                                   pSum[iL][jL] + pSum[i][j]
                                    - pSum[iL][j] - pSum[i][jL]
                                  );
                }
            }
        }
    }
    
    outFile << M - maxCubes << endl;
    inFile.close();
    outFile.close();

    return EXIT_SUCCESS;
}
