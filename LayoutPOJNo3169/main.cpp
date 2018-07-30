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

int n;
vector<int> g[100];
vector<int> w[100];
int d[100];
char color[100];

bool bellman() {
    for (int i = 1; i <= n; ++i) {
        d[i] = INT_MAX;
    }
    d[1] = 0;

    for (int j = 0; j < n ; ++j) {
        for (int i = 1; i <= n; ++i) {
            for (int k = 0; k < g[i].size(); ++k) {
                int v = g[i][k];
                if(d[i] != INT_MAX && d[v] > d[i] + w[i][k]) {
                    d[v] = d[i] + w[i][k];
                    if(j == n - 1) return true;
                }
            }
        }
    }
    return false;
}

int main() {
    int ml, md;
    cin >> n >> ml >>md;
    for (int i = 0; i < ml; ++i) {
        int a, b, d;
        cin >> a >> b >> d;
        g[a].push_back(b);
        w[a].push_back(d);
    }
    for (int i = 0; i < md; ++i) {
        int a, b, d;
        cin >> a >> b >> d;
        g[b].push_back(a);
        w[b].push_back(-d);
        g[b][a] = -d;
    }
    for (int j = 1; j < n; ++j) {
        g[j+1].push_back(j);
        w[j+1].push_back(0);
    }
    bellman();
    bool sol = true;
    for (int k = 1; k <=n ; ++k) {
        if(d[k] < 0) {
            sol = false;
            break;
        }
    }
    if(!sol) {
        cout << -1 << endl;
        return 0;
    }
    if(d[n] == INT_MAX) cout << -2 << endl;
    else
    cout << d[n] << endl;

    return 0;
}
*/
