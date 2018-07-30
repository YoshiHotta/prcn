/*
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int n;
vector<int> g[100];
vector<int> w[100];
int d[100];
char color[100];

bool bellman() {
    for (int i = 0; i < n; ++i) {
        d[i] = INT_MAX;
    }
    d[0] = 0;

    for (int j = 0; j < n ; ++j) {
        for (int i = 0; i < n; ++i) {
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
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int u;
        int k;
        cin >> u >> k;
        int v, c;
        for (int j = 0; j < k; ++j) {
            cin >> v >> c;
            g[u].push_back(v);
            w[u].push_back(c);
        }
    }

    bool neg = bellman();

    for (int j = 0; j < n; ++j) {
        if (d[j] == INT_MAX) cout << "INF" << endl;
        else
            cout << j << " " << d[j] << endl;

    }

    return 0;
}
*/
