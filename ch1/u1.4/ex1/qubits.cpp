#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

FILE* outFile;
unsigned int depth;
char buff[3], temp;

void solve();

int main() {
    FILE* inFile  = fopen("qubits.in", "r");
          outFile = fopen("qubits.out", "w");

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
    
    buff[0] = 'A';
    buff[1] = 'C';
    buff[2] = 'B';

    depth = N - 1;
    solve();

    fclose(outFile);

    return EXIT_SUCCESS;
}

void solve () {
    if (0 == depth) {
        fprintf(outFile, "%c %c\n", buff[0], buff[1]);
        //printf("%c %c\n", x, y);
    } else {
        --depth;
        
        temp = buff[1];
        buff[1] = buff[2];
        buff[2] = temp;

        solve();
        
        //printf("%c %c\n", x, y);
        fprintf(outFile, "%c %c\n", buff[0], buff[2]);
        
        temp = buff[0];
        buff[0] = buff[1];
        buff[1] = buff[2];
        buff[2] = temp;
        
        solve();
        
        temp = buff[0];
        buff[0] = buff[2];
        buff[2] = temp;

        ++depth;
    }

    return;
}
