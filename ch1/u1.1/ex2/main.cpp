#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace std;

int main () {
    ifstream inFile  ("tickets.in");
    ofstream outFile ("tickets.out");

    if (NULL == inFile) {
        cerr << "main::fopen[in]" << endl;
        exit(EXIT_FAILURE);
    }
    if (NULL == outFile) {
        cerr << "main::fopen[out]" << endl;
        exit(EXIT_FAILURE);
    }
    
    const unsigned int ticket = 10;
    const double discountA = 0.1, discountB = 0.2,
                 discountC = 0.3, discountD = 0.5;

    unsigned int students, limitA, limitB, limitC, limitD, minCost;
    inFile >> students >> limitA >> limitB >> limitC >> limitD;
 
    unsigned int tempAB, tempCD;
    tempAB = min(max(students, limitA) * ticket * (1 - discountA),
                 max(students, limitB) * ticket * (1 - discountB)
                );
    tempCD = min(max(students, limitC) * ticket * (1 - discountC),
                 max(students, limitD) * ticket * (1 - discountD)
                );
    minCost = min(students * ticket,
                  min(tempAB, tempCD)
                 );

    outFile << minCost << endl;

    inFile.close();
    outFile.close();
    
    return EXIT_SUCCESS;
}
