#include <algorithm>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main () {
    FILE *inFile = fopen("tickets.in", "r");
    FILE *outFile = fopen("tickets.out", "w");

    if (NULL == inFile) {
        fprintf(stderr, "main::fopen[in]");
        exit(EXIT_FAILURE);
    }
    if (NULL == outFile) {
        fprintf(stderr, "main::fopen[out]");
        exit(EXIT_FAILURE);
    }
    
    const unsigned int ticket= 10;
    const double discountA = 0.1, discountB = 0.2,
                 discountC = 0.3, discountD = 0.5;
    unsigned int students, limitA, limitB, limitC, limitD, minCost;
    
    fscanf(inFile, "%u\n%u%u%u%u",
            &students,
            &limitA, &limitB, &limitC, &limitD);
 
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

    fprintf(outFile, "%u\n", minCost);
    fclose(inFile);
    fclose(outFile);
    
    return EXIT_SUCCESS;
}
