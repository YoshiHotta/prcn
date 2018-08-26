/*
#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <stack>
#include <cmath>
#include <queue>
#include <set>
#include <map>
using namespace std;

int h,w,d;
//map<int, pair<int, int>> m;
typedef struct pr {
    int x; int y;
} Pair;
Pair m[90001];
int dd[90001];

int solve(int l, int r) {
    int sum = 0;
    for (int s = l; s < r ; s+=d) {
        int t = s + d;
        auto sp = m[s];
        auto tp = m[t];
        sum += abs(sp.x - tp.x) + abs(sp.y - tp.y);
    }
    return  sum;

}

int main() {
    cin >> h>> w>>d;
    for (int i = 1; i <= h; ++i) {
        for (int j = 1; j <= w; ++j) {
            int a;
            cin >> a;
            Pair p = {i,j};
            m[a] = p;
        }
    }
    for (int ddd = 0; ddd < d; ++ddd) {
        dd[ddd] = 0;
        for (int i = ddd; i <= h * w ; ++i) {

        }
    }

    int q;
    cin >> q;
    for (int k = 0; k < q; ++k) {
        int l,r;
        cin >> l >> r;
        cout << solve(l, r) << endl;
    }

    return 0;
}
*/
