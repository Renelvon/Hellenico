#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <functional>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

bool IsOne (const int i) { return 1 == i; }

int main () {
    ifstream inFile ("acropolis.in");
    ofstream outFile ("acropolis.out");

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

    vector<unsigned int> weight(N, 0), auxWeight;
    auxWeight.reserve(N);

    for (unsigned int i = 0; i < N; ++i) {
         inFile >> weight[i];
    }

    remove_copy_if(weight.begin(), weight.end(),
                   back_inserter(auxWeight), 
                   bind2nd(equal_to<unsigned int>(), 1)
                  );

    sort(auxWeight.begin(), auxWeight.end());
    
    for (unsigned int i = 0, j = 0; i < N; ++i) {
        if (weight[i] != 1)
            weight[i] = auxWeight[j++];
    }

    copy(weight.begin(), weight.end(),
         ostream_iterator<unsigned int>(outFile, "\n")
        );
    
    inFile.close();
    outFile.close();
    
    return EXIT_SUCCESS;
}
