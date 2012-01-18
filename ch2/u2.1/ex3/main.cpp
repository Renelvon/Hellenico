#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iterator>
#include <valarray>
#include <vector>

using namespace std;

int main() {
/*
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
*/    
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
/*
    for (unsigned int i = 0; i < numClocks; ++i) {
        inFile >> clocks[i];
    }
*/
    for (unsigned int i = 0; i < numClocks; ++i) {
        clocks[i] = 0;
    }
    
    unsigned int arr[28];
    fill(arr, arr + 28, 0);

    for (unsigned int ia = 0; ia < 9 * 9 * 9 * 9 ; ++ia) {
        for(unsigned int ib = 0; ib < numClocks; ++ib) {
            if (clocks[ib] < 3) {
                ++clocks[ib];
                break;
            } else {
                clocks[ib] = 0;
            }
        }
   //     for (unsigned int ib = 0; ib < numClocks; ++ib) {
   //         cout << clocks[ib] << " ";
   //     }
   //     cout << endl;
    unsigned int bestLength = 28;
    vector<unsigned int> seq, bestSol(bestLength, 9);
    valarray<unsigned int> temp(numClocks), check(numClocks);
    for (unsigned int i = 1, depth, currOp = 0; i < bestLength; i += 5) {
        //cout << "i= " << i << endl;
        seq.clear();
        seq.reserve(i);
        temp = clocks;
        depth = 0;
        currOp = 0;
        do {
            check = temp;
            check %= 4;
            if (check.max() == 0 && bestLength > seq.size()) {
                bestSol = seq;
                bestLength = seq.size();
            }

            if (depth < i && depth < bestLength) {
                ++depth;
                seq.push_back(currOp + 1);
                temp += opVar[currOp];
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
            /*
            copy(seq.begin(), seq.end(),
                 ostream_iterator<unsigned int>(cout, " ")
                );
            cout << endl;
            */
        } while (depth > 0);
    }
    arr[bestLength]++;
    }

    for (unsigned int i= 0; i < 28; ++i) {
        cout << "Sols with " << i << " moves: " << arr[i] << endl;
    }
    cout << endl;
    /*
    copy(bestSol.begin(), bestSol.end(),
         ostream_iterator<unsigned int>(outFile, " ")
        );
    outFile << endl;
    
    inFile.close();
    outFile.close();
*/
    delete[] opVar;

    return EXIT_SUCCESS;
}
