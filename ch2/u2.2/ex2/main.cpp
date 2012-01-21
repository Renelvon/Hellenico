#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    ifstream inFile  ("ngame.in");
    ofstream outFile ("ngame.out");

    if (NULL == inFile) {
        cerr << "main::fopen[in]" << endl;
        exit(EXIT_FAILURE);
    }
    if (NULL == outFile) {
        cerr << "main::fopen[out])" << endl;
        exit(EXIT_FAILURE);
    }

    const unsigned int maxN = 1000000;
    bool win[maxN + 1];
    fill(win, win + maxN + 1, false);

    unsigned int K, L, m;
    inFile >> K >> L >> m;

    for (unsigned int i = 0; i < maxN + 1; ++i) {
        win[i] = (
                    (i < 2       || win[i - 2      ]) &&
                    (i < (K + 1) || win[i - (K + 1)]) &&
                    (i < (L + 1) || win[i - (L + 1)]) &&
                    i >= 1
                 ) ||
                 (
                    (i < (K + 1) || win[i - (K + 1)]) &&
                    (i < (2 * K) || win[i - (2 * K)]) &&
                    (i < (K + L) || win[i - (K + L)]) &&
                    i >= K
                 ) ||
                 (
                    (i < (L + 1) || win[i - (L + 1)]) &&
                    (i < (K + L) || win[i - (K + L)]) &&
                    (i < (2 * L) || win[i - (2 * L)]) &&
                    i >= L
                 );
    }

    string sol;
    for (unsigned int ni; m > 0; --m) {
        inFile >> ni;
        if (win[ni]) {
            sol.push_back('A');
        } else {
            sol.push_back('B');
        }
    }

    outFile << sol << endl;
    inFile.close();
    outFile.close();

    return EXIT_SUCCESS;
}
