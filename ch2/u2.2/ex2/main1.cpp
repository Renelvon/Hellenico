#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iterator>

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

    const unsigned int maxN = 100;
    unsigned int profit[maxN + 1][maxN + 1], nums[maxN + 1];
    
    unsigned int N;
    inFile >> N;

    for (unsigned int i = 0; i < N; ++i) {
        fill(profit[i], profit[i] + N, 0);
        inFile >> nums[i];
    }
    
    for (unsigned int i = 0, sum = 0; i < N; ++i) {
        sum = 0;
        for (unsigned int j = i; j < N; ++j) {
           sum += nums[j];
           profit[i][j] = sum;
        }
        copy(profit[i], profit[i] + N,
             ostream_iterator<unsigned int>(cout, " ")
            );
        cout << endl;
    }
    cout << endl;

    unsigned int totalSum = profit[0][N - 1], p1max = 0;
    for (unsigned int i = 1; i < N; ++i) {
        for (unsigned int ii = 0, j = i; j < N; ++ii, ++j) {
           profit[ii][j] -= min(profit[ii][j - 1], profit[ii + 1][j]);
        }
        for (unsigned j = 0; j < N; ++j) {
            copy(profit[j], profit[j] + N,
                 ostream_iterator<unsigned int>(cout, " ")
                );
            cout << endl;
        }
        cout << endl;
    }
    
    p1max = profit[0][N - 1];
    if (N % 2 == 0) {
        outFile << p1max << " " << totalSum - p1max;
    } else {
        outFile << totalSum - p1max << " " << p1max;
    }

    outFile << endl;

    inFile.close();
    outFile.close();

    return EXIT_SUCCESS;
}
