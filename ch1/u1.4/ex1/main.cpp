#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <iterator>

using namespace std;

FILE* outFile;

void solve(unsigned int, char, char, char);

int main() {
    FILE* inFile  = fopen("qubits.in", "r");
          outFile = fopen("/dev/null", "w");

    if (NULL == inFile) {
        cerr << "main::fopen[in]" << endl;
        exit(EXIT_FAILURE);
    }
    if (NULL == outFile) {
        cerr << "main::fopen[out])" << endl;
        exit(EXIT_FAILURE);
    }
    
    unsigned int N;
    //scanf("%u", &N);
    fscanf(inFile, "%u", &N);
    fclose(inFile);

    solve(N - 1, 'A', 'C', 'B');

    fclose(outFile);

    return EXIT_SUCCESS;
}

void solve (const unsigned int n, const char x, const char y, const char z) {
    if (0 == n) {
        fprintf(outFile, "%c %c\n", x, y);
        //printf("%c %c\n", x, y);
    } else {
        solve(n - 1, x, z, y);
        //printf("%c %c\n", x, y);
        fprintf(outFile, "%c %c\n", x, y);
        solve(n - 1, z, y, x);
    }

    return;
}
