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

int solve(vector<int> p, int n, int m) {
    vector<int> cd(n * n);
    for (int l = 0; l < n; ++l) {
        for (int i = 0; i < n; ++i) {
            cd[n * l + i] = p[l] + p[i];
        }
    }

    sort(cd.begin(), cd.end());

    int mx = -1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int r = m - (p[i] + p[j]);
            auto it = upper_bound(cd.begin(), cd.end(), r);
            if(*(--it) + p[i] + p[j] <= m )  {
                mx = max(mx, *it + p[i] + p[j]);
            }
        }
    }
    return mx;
}
int main() {
    while(true) {
        int n,m;
        cin >> n >> m;
        if(!n && !m) break;

        vector<int> p(n + 1);
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }
        p[n] = 0;

        int res = solve(p, n + 1, m);
        cout << res << endl;
    }

    return 0;
}
*/
