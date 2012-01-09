#include <cstdio>
#include <cstdlib>

int main () {
    FILE *inFile = fopen("time.in", "r");
    FILE *outFile = fopen("time.out", "w");

    if (NULL == inFile) {
        fprintf(stderr, "main::fopen[in]");
        exit(EXIT_FAILURE);
    }
    if (NULL == outFile) {
        fprintf(stderr, "main::fopen[out]");
        exit(EXIT_FAILURE);
    }

    unsigned int hours, minutes, seconds;
    fscanf(inFile, "%u:%u:%u", &hours, &minutes, &seconds);

    seconds <<= 1;
    minutes <<=1;
    hours <<= 1;
    minutes += seconds / 60;
    seconds %= 60;
    hours += minutes / 60;

    fprintf(outFile, "%02u:%02u:%02u\n", hours, minutes, seconds);
    fclose(inFile);
    fclose(outFile);
    
    return EXIT_SUCCESS;
}
