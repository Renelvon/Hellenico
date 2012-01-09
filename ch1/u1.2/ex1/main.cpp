#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

using namespace std;

int main () {
    ifstream inFile ("names.in");
    ofstream outFile ("names.out");

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
    
    const unsigned int maxLength = 20;
    const unsigned int maxNames = 1000;
    
    string temp;
    temp.reserve(maxLength);

    vector<string> namesV;
    namesV.reserve(maxNames);

    getline(inFile, temp); // remove rest of 1st line
    for (unsigned int i = 0; i < N; ++i) {
        getline(inFile, temp);
        namesV.push_back(temp);
    }
    
    string namesC[N];
    for (unsigned int i = 0; i < N; ++i) {
        namesC[i].reserve(maxLength);
        namesC[i].assign(namesV[i]);
        temp.assign(namesV[i]);
        for (unsigned int j = 0; j < namesC[i].size(); ++j) {
            rotate(namesC[i].begin(), namesC[i].begin() + 1,
                   namesC[i].end()
                  );
            if (temp.compare(namesC[i]) > 0) {
                temp.assign(namesC[i]);
            }
        }
        namesC[i].assign(temp);
    }
   
    unsigned int best = 0;
    for (unsigned int i = 1; i < N; ++i) {
        if (namesC[best].compare(namesC[i]) > 0) {
            best = i;
        }
    }
    
    outFile << namesV[best] << endl;
    
    inFile.close();
    outFile.close();
    
    return EXIT_SUCCESS;
}
