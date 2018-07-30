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
vector<int> g[100000];
vector<int> c(100000);

void dfs(int v, int col) {
    c[v] = col;
    for (int i = 0; i < g[v].size(); ++i) {
        if(c[g[v][i]] == 0) dfs(g[v][i], col);
    }
}

int main() {
    int n, m, q;
    cin >> n>> m;
    for (int i = 0; i < m; ++i) {
        int v, w;
        cin >> v >> w;
        g[w].push_back(v);
        g[v].push_back(w);
    }

    for (int k = 0; k < n; ++k) {
        c[k] = 0;
    }

    int col = 1;
    for (int j = 0; j < n; ++j) {
        if(!c[j]) {
            dfs(j, col);
            col++;
        }
    }

    cin >> q;
    for (int l = 0; l < q; ++l) {
        int v,w;
        cin >> v >> w;
        if(c[v] == c[w]) cout << "yes";
        else cout << "no";
        cout << endl;

    }


    return 0;
}
*/
