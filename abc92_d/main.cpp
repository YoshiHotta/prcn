/*
#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int z[100][100];
    int p = 0;
    for (int j = 0; j < 100; ++j) {
        for (int i = 0; i < 100; ++i) {
            if(j < 50) z[j][i] = 0;
            else z[j][i] = 1;
        }
    }

    for (int i = 0; i < b-1; ++i) {
        z[p/49+1][1 + p%98 + (p/98) % 2] = 1;
        p+=2;
    }
    p = 0;
    for (int i = 0; i < a-1; ++i) {
        z[p/49+52][1 + p%98 + (p/98) % 2] = 0;
//        z[p/50 + 51][p%50 + (p/50) % 2] = 0;
        p+=2;
    }

    cout << "100 100" << endl;
    for (int k = 0; k < 100; ++k) {
        for (int i = 0; i < 100; ++i) {
            if(z[k][i]) cout << '#' ;
            else cout << '.';
            if(i==99) cout << endl;
        }

    }
    return 0;
}
*/
