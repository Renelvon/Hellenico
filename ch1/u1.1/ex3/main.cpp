#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace std;

int main () {
    ifstream inFile  ("downloads.in");
    ofstream outFile ("downloads.out");

    if (NULL == inFile) {
        cerr << "main::fopen[in]" << endl;
        exit(EXIT_FAILURE);
    }
    if (NULL == outFile) {
        cerr << "main::fopen[out]" << endl;
        exit(EXIT_FAILURE);
    }
    
    unsigned int numOfFiles, speed = 0, sizeKB = 0;
    inFile >> numOfFiles;

    for (unsigned int i = 0, curSpeed, timeLeft; i < numOfFiles; ++i) {
        inFile >> curSpeed >> timeLeft;
        speed += curSpeed;
        sizeKB += curSpeed * timeLeft;
    }

    outFile << floor(sizeKB / static_cast<double>(speed) + 0.5) << endl;

    inFile.close();
    outFile.close();
    
    return EXIT_SUCCESS;
}
