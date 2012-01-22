#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <iostream>

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
    unsigned int profit[maxN][maxN], nums[maxN];
    for (unsigned int i = 0; i < maxN; ++i) {
        fill(profit[i], profit[i] + maxN, 0);
    }
    fill(nums, nums + maxN, 0);

    unsigned int N;
    inFile >> N;

    for (unsigned int i = 0; i < N; ++i) {
        inFile >> nums[i];
    }
    
    for (unsigned int i = 0, sum; i < N; ++i) {
        sum = 0;
        for (unsigned int j = i; j < N; ++j) {
           sum += nums[j];
           profit[i][j] = sum;
        }
    }

    unsigned int totalSum = profit[0][N - 1], p1max = 0;
    for (unsigned int i = 1; i < N; ++i) {
        for (unsigned int ii = 0, j = i; j < N; ++ii, ++j) {
           profit[ii][j] -= min(profit[ii][j - 1], profit[ii + 1][j]);
        }
    }

    p1max = profit[0][N - 1];
    outFile << p1max << " " << totalSum - p1max << endl;

    inFile.close();
    outFile.close();

    return EXIT_SUCCESS;
}
