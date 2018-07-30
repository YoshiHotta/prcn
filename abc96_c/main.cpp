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
    int h,w;
    char g[52][52];
    cin >> h >>w;
    for (int k = 0; k <=w+1 ; ++k) {
        g[0][k] = '.';
        g[h+1][k] = '.';
    }
    for (int k = 0; k <=h+1 ; ++k) {
        g[k][0] = '.';
        g[k][w+1] = '.';

    }
    for (int i = 1; i <= h; ++i) {
        for (int j = 1; j <= w; ++j) {
            cin >> g[i][j];
        }
    }
    int x[4] = {1,0,-1,0};
    int y[4] = {0,1,0,-1};
    bool poss = true;
    for (int i = 1; i <= h ; ++i) {
        for (int j = 1; j <= w ; ++j) {
            if(g[i][j] == '#') {
                bool f = false;
                for (int k = 0; k < 4; ++k) {
                    if(g[i+x[k]][j+y[k]] == '#') {
                        f=true; break;
                    }
                }
                if(!f) {
                    poss = false;
                    break;
                }
            }
        }
    }
    if(poss) cout << "Yes";
    else cout << "No";
    cout << endl;

    return 0;
}
*/
