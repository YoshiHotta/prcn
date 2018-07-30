/*
// https://code-festival-2017-qualb.contest.atcoder.jp/tasks/code_festival_2017_qualb_c
#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>

using namespace std;

int n, m;
vector<int> g[100002];
vector<int> col(100002);
long o = 0, mn = 0;

bool dfs(int v, int c) {
    col[v] = c;
    for (auto u : g[v]) {
        if (col[u] == 0) {
            if(!dfs(u, -c)) return false;
        } else {
            if (col[u] == c) return false;
        }
    }
    return true;
}

int main() {
    cin >> n >> m;
    int a, b;
    for (int i = 0; i < m; ++i) {
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for (int j = 1; j <= n; ++j) {
        col[j] = 0;
    }
    if(dfs(a, 1)) {
        long o = 0, mn = 0;
        for (int i = 1; i <= n; ++i) {
            if(col[i] == 1) o++;
            else mn ++;
        }
        cout << o * mn - m << endl;
    } else {
        cout << n * (n-1) /2 - m << endl;
    }

    return 0;
}
*/
