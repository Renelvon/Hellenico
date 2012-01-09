#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ifstream inFile ("crocodiles.in");
    ofstream outFile ("crocodiles.out");

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

    int birth[N], death[N];
    for (unsigned int i = 0; i < N; ++i) {
        inFile >> birth[i] >> death[i];
    }

    sort(birth, birth + N);
    sort(death, death + N);

    unsigned int currLive = 0, maxLive = 0;
    for (unsigned int i = 0, j = 0; i < N; ) {
        if (birth[i] < death[j]) {
            ++currLive;
            maxLive = max(currLive, maxLive);
            ++i;
        } else if (birth[i] > death[j]) {
            --currLive;
            ++j;
        } else {
            ++i;
            ++j;
        }
    }

    outFile << maxLive << endl;
    inFile.close();
    outFile.close();

    return EXIT_SUCCESS;
}
