#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iterator>
#include <valarray>
#include <vector>

using namespace std;

int main() {
    ifstream inFile ("clocks.in");
    ofstream outFile ("clocks.out");

    if (NULL == inFile) {
        cerr << "main::fopen[in]" << endl;
        exit(EXIT_FAILURE);
    }
    if (NULL == outFile) {
        cerr << "main::fopen[out])" << endl;
        exit(EXIT_FAILURE);
    }
    
    const unsigned int numClocks = 9, numOps = 9;
    const unsigned int opConstArr[numOps][numClocks] = {
    //  {A, B, C, D, E, F, G, H, I}  
        {1, 1, 0, 1, 1, 0, 0, 0, 0}, // 0: ABDE
        {1, 1, 1, 0, 0, 0, 0, 0, 0}, // 1: ABC
        {0, 1, 1, 0, 1, 1, 0, 0, 0}, // 2: BCEF
        {1, 0, 0, 1, 0, 0, 1, 0, 0}, // 3: ADG
        {0, 1, 0, 1, 1, 1, 0, 1, 0}, // 4: BDEFH
        {0, 0, 1, 0, 0, 1, 0, 0, 1}, // 5: CFI
        {0, 0, 0, 1, 1, 0, 1, 1, 0}, // 6: DEGH
        {0, 0, 0, 0, 0, 0, 1, 1, 1}, // 7: GHI
        {0, 0, 0, 0, 1, 1, 0, 1, 1}  // 8: EFHI
    };
    valarray<unsigned int> clocks(numClocks); // Clock state

    // Initialize opVar with opConstArr
    valarray<unsigned int>* opVar = new valarray<unsigned int>[numOps];
    for (unsigned int i = 0; i < numOps; ++i) {
        opVar[i].resize(numClocks);
        for (unsigned int j = 0; j < numClocks; ++j) {
            opVar[i][j] = opConstArr[i][j];
        }
    }

    for (unsigned int i = 0; i < numClocks; ++i) {
        inFile >> clocks[i];
    }

    vector<unsigned int> seq;
    valarray<unsigned int> temp(numClocks), check(numClocks);
    bool solFound = false;
    for (unsigned int i = 1, depth, currOp; !solFound; i *= 2) {
        seq.clear();
        seq.reserve(i);
        temp = clocks;
        depth = 0;
        do {
            check = temp;
            check %= 4;
            if (check.max() == 0) {
                solFound = true;
                break;
            }

            if (depth < i) {
                ++depth;
                seq.push_back(1);
                temp += opVar[1 - 1];
            } else {
                while (depth > 0) {
                    --depth;
                    currOp = seq.back() - 1;
                    seq.pop_back();
                    temp -= opVar[currOp];
                    if (currOp < numOps - 1) {
                        ++depth;
                        seq.push_back(++currOp + 1);
                        temp += opVar[currOp];
                        break;
                    }
                }               
            }
        } while (depth > 0);
    }

    copy(seq.begin(), seq.end(),
         ostream_iterator<unsigned int>(outFile, " ")
        );
    outFile << endl;

    inFile.close();
    outFile.close();

    delete[] opVar;

    return EXIT_SUCCESS;
}
