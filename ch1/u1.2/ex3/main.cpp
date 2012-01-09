#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main () {
    ifstream inFile ("elevator.in");
    ofstream outFile ("elevator.out");

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

    vector<unsigned int> weight(N, 1);

    unsigned int maxW = 0;
    for (unsigned int i = 0; i < N; i++) {
         inFile >> weight[i];
         maxW = max(maxW, weight[i]);
    }
    
    sort(weight.begin(), weight.end());
    
    unsigned int offset = N & 1;
    for (unsigned int i = 0, j = N - 1 - offset; i < j; ++i, --j) {
        maxW = max(maxW, weight[i] + weight[j]);
    }
    
    outFile << (N + 1) / 2 << " " << maxW << endl;
    
    inFile.close();
    outFile.close();
    
    return EXIT_SUCCESS;
}
