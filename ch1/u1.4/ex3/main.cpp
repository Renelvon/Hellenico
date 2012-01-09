#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace std;

typedef struct {
     double quality;
     unsigned int volume;
     unsigned int mass;
} stoneT;

bool stoneComp (const stoneT a, const stoneT b) {
    return a.mass * b.volume > b.mass * a.volume;
}

int main () {
    ifstream inFile ("stones.in");
    FILE* outFile = fopen("stones.out", "w");

    if (NULL == inFile) {
        cerr << "main::fopen[in]" << endl;
        exit(EXIT_FAILURE);
    }
    if (NULL == outFile) {
        cerr << "main::fopen[out])" << endl;
        exit(EXIT_FAILURE);
    }
    
    unsigned int N, Z;
    inFile >> N >> Z;

    stoneT stones[N];
    for (unsigned int i = 0; i < N; ++i) {
        inFile >> stones[i].volume >> stones[i].mass;
    }

    sort(stones, stones + N, stoneComp);
    
    unsigned i = 0;
    double maxMass = 0;
    while (Z > 0) {
        if (stones[i].volume < Z) {
            Z -= stones[i].volume;
            maxMass += stones[i].mass;
        } else {
            maxMass += stones[i].mass * Z / (double) stones[i].volume;
            break;
        }
        i++;
    }

    fprintf(outFile,"%3.3f\n", maxMass);

    inFile.close();
    fclose(outFile);

    return EXIT_SUCCESS;
}
