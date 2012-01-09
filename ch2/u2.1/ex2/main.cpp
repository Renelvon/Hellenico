#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iterator>

using namespace std;

int main() {
    ifstream inFile ("lamps.in");
    ofstream outFile ("lamps.out");

    if (NULL == inFile) {
        cerr << "main::fopen[in]" << endl;
        exit(EXIT_FAILURE);
    }
    if (NULL == outFile) {
        cerr << "main::fopen[out])" << endl;
        exit(EXIT_FAILURE);
    }
    
    inFile.close();
    outFile.close();

    return EXIT_SUCCESS;
}
