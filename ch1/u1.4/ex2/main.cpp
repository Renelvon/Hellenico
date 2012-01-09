#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iterator>

using namespace std;

int main () {
    ifstream inFile ("contest.in");
    ofstream outFile ("contest.out");

    if (NULL == inFile) {
        cerr << "main::fopen[in]" << endl;
        exit(EXIT_FAILURE);
    }
    if (NULL == outFile) {
        cerr << "main::fopen[out])" << endl;
        exit(EXIT_FAILURE);
    }
    
    unsigned int N, currNode, parNode, shells;
    inFile >> N;
    ++N; // to accumulate extra 'root' node

    unsigned int predTree[N], shellTable[N],
                 maxFromChild[N];
    int children[N];

    fill(predTree, predTree + N, 0); // 0 is invisible 'root' node
    fill(shellTable, shellTable + N, 0);
    fill(maxFromChild, maxFromChild + N, 0);
    fill(children, children + N, 0); // assume all nodes are leaves

    for (unsigned int i = 0; i < N - 2; ++i) {
        inFile >> parNode >> currNode >> shells;
        predTree[currNode] = parNode;
        shellTable[currNode] = shells;
        ++children[parNode];
    
    }
    children[0] = 1;

    bool flag = false;
    while (!flag) {
        flag = true;
        for (unsigned int i = N - 1, p; i > 0; --i) {
            if (0 == children[i]) {
                children[i] = -1;
                p = predTree[i];
                --children[p];
                maxFromChild[p] =
                   max(maxFromChild[p],
                       maxFromChild[i] + shellTable[i]
                      );
                flag = false;
            }
        }
    }

    outFile << maxFromChild[1] << endl;

    inFile.close();
    outFile.close();

    return EXIT_SUCCESS;
}
