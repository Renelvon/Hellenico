#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace std;

struct intv {
    unsigned int start;
    unsigned int finish;
};

bool intvComp (const struct intv a, const struct intv b) {
    return a.finish < b.finish;
}

int main() {
    ifstream inFile  ("rentacar.in");
    ofstream outFile ("rentacar.out");

    if (NULL == inFile) {
        cerr << "main::fopen[in]" << endl;
        exit(EXIT_FAILURE);
    }
    if (NULL == outFile) {
        cerr << "main::fopen[out])" << endl;
        exit(EXIT_FAILURE);
    }

    const unsigned int maxN = 10000;
    struct intv offer[maxN];

    unsigned int N, dummy;
    inFile >> N;

    for (unsigned int i = 0; i < N; ++i) {
        inFile >> dummy >> offer[i].start >> offer[i].finish;
    }

    sort(offer, offer + N, intvComp);

    unsigned int s = 0;
    struct intv curr = offer[0];
    for (unsigned int i = 1; i < N; ++i) {
        if (offer[i].start > curr.finish) {
            curr = offer[i];
            ++s;
        }
    }
    outFile << ++s << endl;

    inFile.close();
    outFile.close();

    return EXIT_SUCCESS;
}
