#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace std;

int main () {
    ifstream inFile ("cubes.in");
    ofstream outFile ("cubes.out");

    if (NULL == inFile) {
        cerr << "main::fopen[in]" << endl;
        exit(EXIT_FAILURE);
    }
    if (NULL == outFile) {
        cerr << "main::fopen[out])" << endl;
        exit(EXIT_FAILURE);
    }
    
    unsigned int N, K, columns, rest, maxHeight;
    inFile >> N >> K;
    
    columns = floor(sqrt(2 * N / (double) K + 0.25) - 0.5);
    rest = N - columns * (columns + 1) * K / 2;
    maxHeight = max(rest, columns * K + rest / (columns + 1));
     
    outFile << maxHeight << endl;

    inFile.close();
    outFile.close();

    return EXIT_SUCCESS;
}
