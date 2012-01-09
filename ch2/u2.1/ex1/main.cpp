#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iterator>

using namespace std;

int main() {
    ifstream inFile ("digits.in");
    ofstream outFile ("digits.out");

    if (NULL == inFile) {
        cerr << "main::fopen[in]" << endl;
        exit(EXIT_FAILURE);
    }
    if (NULL == outFile) {
        cerr << "main::fopen[out])" << endl;
        exit(EXIT_FAILURE);
    }
    
    unsigned int M, m1 = 0, m2 = 0;
    inFile >> M;
    
    unsigned int digits[10];
    bool flag = false;
    do {
        ++m1;
        m2 += M;
        fill(digits, digits + 10, 0);

        for (unsigned int d = M, r; d > 0; d /= 10) {
            r = d % 10;
            digits[r]++;
        }

        for (unsigned int d = m1, r; d > 0; d /= 10) {
            r = d % 10;
            digits[r]++;
        }

        for (unsigned int d = m2, r; d > 0; d /= 10) {
            r = d % 10;
            digits[r]++;
        }
        
        flag = (digits[0] == 0);
        for (unsigned int idx = 1; idx < 10; ++idx) {
            if (digits[idx] != 1) {
                flag = false;
            }
        }
    } while (!flag && m1 < 10000);

    if (flag) {
        outFile << m1 << " " << m2 << endl;
    } else {
        outFile << 0 << endl;
    }

    inFile.close();
    outFile.close();

    return EXIT_SUCCESS;
}
