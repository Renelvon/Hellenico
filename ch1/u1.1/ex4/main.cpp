#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main () {
    ifstream inFile ("goldbach.in");
    ofstream outFile ("goldbach.out");

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

    vector<bool> bitField(N, false);

    bitField[2] = true;
    for (unsigned int i = 3; i < N; i += 2) {
         bitField[i] = true;
    }
    

    for (unsigned int i = 3; i < N; ++i) {
        if (bitField[i]) {
            for (unsigned int j = 2 * i; j < N; j += i) {
                bitField[j] = false;
            }
        }
    }
    
    unsigned int p1;
    for (p1 = 3; p1 < N; p1 += 2) 
        if (bitField[p1] && bitField[N - p1])
            break;
            
    outFile << p1 << " " << N - p1 << endl;
    
    inFile.close();
    outFile.close();
    
    return EXIT_SUCCESS;
}
