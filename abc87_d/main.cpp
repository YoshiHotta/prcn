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

bool cmp(tuple<long long, long long, long long> x, tuple<long long, long long, long long> y) {
    return get<0>(x) < get<0>(y);
}
int main() {
    long long n, m;
    cin >> n >> m ;
    vector<tuple<long long, long long, long long> > lrd(m);
    for (long long i = 0; i < m; ++i) {
        long long l,r,d;
        cin >> l >> r >> d;
        if(r < l) swap(l,r);
        lrd[i] = make_tuple(l,r,d);
    }

    sort(lrd.begin(), lrd.end(), cmp);

    vector<long long> pos(n+1, 0);


    bool flag = true;
    for (long long j = 0; j < m; ++j) {
        long long l = get<0>(lrd[j]);
        long long r = get<1>(lrd[j]);
        long long d = get<2>(lrd[j]);

        if((pos[r] && pos[l] + d != pos[r])) {
            flag = false;
        } else {
            pos[r] = pos[l] + d;
        }
    }
    if(flag) cout << "Yes";
    else cout << "No";
    cout << endl;

    return 0;
}

*/
