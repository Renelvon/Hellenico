#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ifstream inFile ("clocks.in");
    ofstream outFile ("clocks.out");

    if (NULL == inFile) {
        cerr << "main::fopen[in]" << endl;
        exit(EXIT_FAILURE);
    }
    if (NULL == outFile) {
        cerr << "main::fopen[out])" << endl;
        exit(EXIT_FAILURE);
    }

    const unsigned int numClocks = 9, numOps = 9;
    const unsigned int B[numClocks][numOps] = {
        {3, 2, 3, 2, 2, 1, 3, 1, 0},
        {3, 3, 3, 3, 3, 3, 2, 0, 2},
        {3, 2, 3, 1, 2, 2, 0, 1, 3},
        {3, 3, 2, 3, 3, 0, 3, 3, 2},
        {3, 2, 3, 2, 1, 2, 3, 2, 3},
        {2, 3, 3, 0, 3, 3, 2, 3, 3},
        {3, 1, 0, 2, 2, 1, 3, 2, 3},
        {2, 0, 2, 3, 3, 3, 3, 3, 3},
        {0, 1, 3, 1, 2, 2, 3, 2, 3}
    };
    /* Let A be the matrix where a[i][j] = 1 if operation j turns clock i
     * and a[i][j] = 0 otherwise. Then if c is the vector of initial state,
     * we seek a vector s of operations such that As + c = 0 (modulo 4).
     * Thus s = A^(-1) (0 - c), provided A is invertible. B == A^1
     */

    unsigned int clocks[numClocks];
    for (unsigned int i = 0, temp; i < numClocks; ++i) {
        inFile >> temp;
        clocks[i] = (4 - temp) % 4;
    }
    
    unsigned int sol[numOps];

    for (unsigned int i = 0, sum; i < numOps; ++i) {
        sum = 0;
        for (unsigned int j = 0; j < numClocks; ++j) {
            sum += B[i][j] * clocks[j];
        }
        sol[i] = sum % 4;
    }

    bool flag = false;
    for (unsigned int i = 0; i < numOps; ++i) {
        for (unsigned int j = 0; j < sol[i]; ++j) {
            if (flag) {
                outFile << " ";
            }
            outFile << i + 1;
            flag = true;
        }
    }
    outFile << endl;

    inFile.close();
    outFile.close();

    return EXIT_SUCCESS;
}
