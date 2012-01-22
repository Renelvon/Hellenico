#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main () {
    FILE *inFile  = fopen("time.in" , "r");
    FILE *outFile = fopen("time.out", "w");

    if (NULL == inFile) {
        cerr << "main::fopen[in]" << endl;
        exit(EXIT_FAILURE);
    }
    if (NULL == outFile) {
        cerr << "main::fopen[out]" << endl;
        exit(EXIT_FAILURE);
    }

    unsigned int hours, minutes, seconds;
    int dummy;
    dummy = fscanf(inFile, "%u:%u:%u", &hours, &minutes, &seconds);

    seconds <<= 1;
    minutes <<= 1;
    hours   <<= 1;
    minutes += seconds / 60;
    seconds %= 60;
    hours   += minutes / 60;

    dummy = fprintf(outFile, "%02u:%02u:%02u\n", hours, minutes, seconds);

    fclose(inFile);
    fclose(outFile);
    
    return EXIT_SUCCESS;
}
