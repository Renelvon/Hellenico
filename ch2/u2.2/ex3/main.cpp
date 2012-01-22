#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <stack>

using namespace std;

struct box {
    unsigned int h;
    unsigned int l;
    unsigned int w;
};

unsigned int min3 (const unsigned int a1,
                   const unsigned int a2,
                   const unsigned int a3) {
    return min(min(a1, a2), a3);
}

int main() {
    ifstream inFile  ("fillbox.in");
    ofstream outFile ("fillbox.out");

    if (NULL == inFile) {
        cerr << "main::fopen[in]" << endl;
        exit(EXIT_FAILURE);
    }
    if (NULL == outFile) {
        cerr << "main::fopen[out])" << endl;
        exit(EXIT_FAILURE);
    }

    unsigned int L, W, H;
    inFile >> L >> W >> H;
    
    struct box currBox, auxBox;
    currBox.h = H; currBox.l = L; currBox.w = W;

    stack<struct box> instances;
    instances.push(currBox);
    
    unsigned long long int numCubes = 0, numCubesH, numCubesL, numCubesW;
    unsigned int minDim, max2, dh, dl, dw;
    do {
        currBox = instances.top();
        instances.pop();

        minDim = min3(currBox.h, currBox.l, currBox.w);
        if (0 == minDim) {
            continue; // Mock box with no volume
        }

        for (max2 = 1; max2 <= minDim; max2 *= 2)
            ; // Intentionally empty
        max2 /= 2;
        // Invariant: max2 is the largest power of two <= minDim.

        // Fill currBox with largest possible 2^n cube
        numCubesH = currBox.h / max2;
        numCubesL = currBox.l / max2;
        numCubesW = currBox.w / max2;

        // Count cubes used.
        numCubes += numCubesH * numCubesL * numCubesW;

        // Determine residual dimensions.
        dh = currBox.h - numCubesH * max2;
        dl = currBox.l - numCubesL * max2;
        dw = currBox.w - numCubesW * max2;
        
        // Generate remaining instances;
        auxBox.h = dh;
        auxBox.l = currBox.l;
        auxBox.w = currBox.w;
        instances.push(auxBox);

        auxBox.h = currBox.h - dh;
        auxBox.l = dl;
        auxBox.w = currBox.w;
        instances.push(auxBox);

        auxBox.h = currBox.h - dh;
        auxBox.l = currBox.l - dl;
        auxBox.w = dw;
        instances.push(auxBox);
    } while (! instances.empty());

    outFile << numCubes << endl;

    inFile.close();
    outFile.close();

    return EXIT_SUCCESS;
}
