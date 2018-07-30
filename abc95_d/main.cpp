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

typedef long long ll;
ll n,c;

typedef struct ss {
    ll x;
    ll v;
} SS;
int main() {
    cin >> n>>c;
    vector<SS> sss;
    for (int i = 0; i < n; ++i) {
        ll x, v;
        cin >> x >> v;
        SS s = {x, v};
        sss.push_back(s);
    }
    // r

    vector<ll> r(n);
    for (int j = 0; j < n; ++j) {
        r[j] += sss[j].v - sss[j].x;
    }
    vector<ll> l(n);
    for (int j = 0; j < n; ++j) {
        l[j] += sss[j].v - (c-sss[j].x);
    }
    vector<ll> rl(n);
    for (int k = 0; k < ; ++k) {
        
    }

    return 0;
}
*/
