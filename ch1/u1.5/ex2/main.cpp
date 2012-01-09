#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iterator>

using namespace std;

int main() {
    FILE* inFile = fopen("lektira.in", "r");
    ofstream outFile ("lektira.out");

    if (NULL == inFile) {
        cerr << "main::fopen[in]" << endl;
        exit(EXIT_FAILURE);
    }
    if (NULL == outFile) {
        cerr << "main::fopen[out])" << endl;
        exit(EXIT_FAILURE);
    }
    
    const size_t maxLength = 51;
    char *stringIn = (char*) calloc(maxLength, sizeof(char));
    char *stringR  = (char*) calloc(maxLength, sizeof(char));
   
    fill(stringIn, stringIn + maxLength, '\0');
    fill(stringR , stringR  + maxLength, '\0');
    
    int length;
    fscanf(inFile, "%s%n", stringIn, &length);

    reverse_copy(stringIn, stringIn + length,
                 stringR);
    
    char *minIdx = stringR + 2;
    // 1st prefix
    for (char *currIdx = stringR + 3; currIdx < stringR + length; ++currIdx) {
        minIdx = lexicographical_compare(currIdx, stringR + length,
                                         minIdx,  stringR + length)
                 ? currIdx
                 : minIdx;
    }
    copy(minIdx, stringR + length,
         ostream_iterator<char>(outFile, "")
        );
    
    // 2nd prefix
    char* minIdx2 = stringR + 1;
    for (char *currIdx = stringR + 2; currIdx < minIdx; ++currIdx) {
        minIdx2 = lexicographical_compare(currIdx, stringR + length,
                                          minIdx2, stringR + length)
                 ? currIdx
                 : minIdx2;
    }
    copy(minIdx2, minIdx,
         ostream_iterator<char>(outFile, "")
        );

    // rest of string.
    copy(stringR, minIdx2,
         ostream_iterator<char>(outFile, "")
        );

    outFile << endl;

    free(stringIn);
    free(stringR);

    fclose(inFile);
    outFile.close();

    return EXIT_SUCCESS;
}
