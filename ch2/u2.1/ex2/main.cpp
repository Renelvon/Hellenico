#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

using namespace std;

int main() {
    FILE* inFile = fopen("lamps.in", "r");
    ofstream outFile ("lamps.out");

    if (NULL == inFile) {
        cerr << "main::fopen[in]" << endl;
        exit(EXIT_FAILURE);
    }
    if (NULL == outFile) {
        cerr << "main::fopen[out])" << endl;
        exit(EXIT_FAILURE);
    }

    const unsigned int maxN = 100;
    unsigned int N, C;
    int dummy = fscanf(inFile, "%u%u", &N, &C);

    int i = -1, on[3] = {-1, -1, -1}, off[3] = {-1, -1, -1};
    do{
        ++i;
        dummy = fscanf(inFile, "%d", on + i);
    } while(on[i] != -1);
    i = -1;
    do{
        ++i;
        dummy = fscanf(inFile, "%d", off + i);
    } while(off[i] != -1);
    
    char lamps[maxN + 2];
    fill(lamps, lamps + maxN + 2, '\0');

    vector<string> sols;
    sols.reserve(16);
    string temp;

    unsigned int opcount;

    bool isValid, op[4] = {false, false, false, false}; 
    for (unsigned int i = 0; i < 16; ++i) {
        fill(lamps + 1, lamps + N + 1, '1');
        opcount = 0;
        if (op[0]) {
            for (unsigned int j = 1; j < N + 1; ++j) {
                lamps[j] = (lamps[j] == '0') ? '1' : '0';
            }
            ++opcount;
        }
        if (op[1]) {
            for (unsigned int j = 1; j < N + 1; j += 2) {
                lamps[j] = (lamps[j] == '0') ? '1' : '0';
            }
            ++opcount;
        }
        if (op[2]) {
            for (unsigned int j = 2; j < N + 1; j += 2) {
                lamps[j] = (lamps[j] == '0') ? '1' : '0';
            }
            ++opcount;
        }
        if (op[3]) {
            for (unsigned int j = 1; j < N + 1; j += 3) {
                lamps[j] = (lamps[j] == '0') ? '1' : '0';
            }
            ++opcount;
        }
        
        for (unsigned int j = 0; j < 4; ++j) {
            op[j] = !op[j];
            if (op[j]) {
                break;
            }
        }

        isValid = true;
        if (on[0] > 0  && lamps[on[0]]  == '0') isValid = false;
        if (on[1] > 0  && lamps[on[1]]  == '0') isValid = false;
        if (off[0] > 0 && lamps[off[0]] == '1') isValid = false;
        if (off[1] > 0 && lamps[off[1]] == '1') isValid = false;
    
        if (opcount > C) isValid = false;
        if (isValid) {
            temp.assign(lamps + 1, lamps + N + 1);
            sols.push_back(temp);
        }
    }

    sort(sols.begin(), sols.end());
    copy(sols.begin(),
         unique(sols.begin(), sols.end()),
         ostream_iterator<string>(outFile, "\n")
        );

    fclose(inFile);
    outFile.close();

    return EXIT_SUCCESS;
}
