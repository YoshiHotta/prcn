/*
#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <set>

#include <tuple>
#include <functional>
#include <map>
using namespace std;

int n; string s;
vector<int> d;

// j, j+1
tuple<int, int, int , int > cnt(int j) {
    int lw = d[j];
    int le = j-lw;
    int rw = d[n] - d[j];
    int re = n-j-rw;
    return make_tuple(lw,le,rw, re);
}

int main() {
    cin >> n>>s;
    d.resize(n+1);
    d[0] = 0;
    for (int i = 1; i <= n; ++i) {
        int p = 0;
        if (s[i-1] == 'W') p = 1;
        d[i] = d[i-1] + p;
    }
    int m = INT_MAX/3;
    for (int j = 1; j <=n ; ++j) {
        int ans = get<0>(cnt(j-1)) + get<3>(cnt(j));
        m = min(m, ans);
    }
    cout << m <<endl;

    return 0;
}
*/
