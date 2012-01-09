#include <algorithm>
#include <cctype>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

using namespace std;

int main () {
    ifstream inFile ("boat.in");
    ofstream outFile ("boat.out");

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

    char c;
    string inString;
    
    vector<string> cars;

    for (unsigned int i = 0, inC, outC ; i < N; ++i) {
        inFile >> outC >> inC;

        for (unsigned int j = 0; j < outC; ++j) {
            cars.pop_back();
        }

        inFile >> c; // Read extra space;
        inFile.unget(); // Reset pointer to first letter of first car

        for (unsigned int j = 0; j < inC - 1; ++j) {
            getline (inFile, inString, ' ');
            cars.push_back(inString);
        }
        
        getline (inFile, inString);
        cars.push_back(inString);
    }
    
    sort(cars.begin(), cars.end());

    copy(cars.begin(), cars.end(),
         ostream_iterator<string>(outFile, "\n")
        );

    inFile.close();
    outFile.close();
    
    return EXIT_SUCCESS;
}
