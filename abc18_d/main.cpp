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

long long n,m,p, q,r;
vector<long long> x,y,z;
long long solve(vector<long long> g) {
    vector<long long> cho(m+1, 0);
    for (long long i = 0; i <p ; ++i) {
        long long gg = g[i]  + 1;
        for (long long j = 0; j < r; ++j) {
            if(x[j] == gg) {
                cho[y[j]] += z[j];
            }
        }
    }
    sort(cho.begin(), cho.end(), greater<long long>());
    long long res = 0;
    for (long long k = 0; k < q; ++k) {
        res += cho[k];

    }
    return res;
}

int main() {
    cin >> n >> m >> p >> q>>r;
    x.resize(r + 1);
    y.resize(r + 1);
    z.resize(r + 1);
    for (long long i = 0; i < r; ++i) {
        cin >> x[i] >> y[i] >> z[i];
    }

    long long mx = 1 << (n - 1);
    long long res = -1;
    for (long long i = 0; i < mx; ++i) {
        vector<long long> g;
        long long cnt = 0;
        for (long long j = 0; j < n; ++j) {
            long long pp = i & (1 << j);
            if(pp) {
                g.push_back(j);
                cnt++;
            }
        }
        if(cnt!=p) {
            continue;
        }
        res = max(res, solve(g));
    }
    cout << res << endl;


    return 0;
}
*/
