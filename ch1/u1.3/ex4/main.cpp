#include <cstdlib>

#include "hiddenlib.h"

unsigned int myMax (unsigned int a, unsigned int b) {
    return (a < b) ? b : a;
}

int main () {

    unsigned int N = getN(), low = 1, high = N;
    bool flag = true;

    while ((low < high) && flag) {
        switch (compare(low, high)) {
            case -1: // closer to high
                low += myMax(1, (high - low) / 2) ;
                break;
            case 1: // closer to low
                high -= myMax(1, (high - low) / 2) ;
                break;
            default: // case 0
                low += (high - low) / 2;
                flag = false;
        }
    }

    ishidden(low);
    return EXIT_SUCCESS;
}
