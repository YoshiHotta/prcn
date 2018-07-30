/*
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int V, E, r;
vector<int> p, d, c;
int g[100001][100001];

void dijkstra() {
    p[r] = -1;
    d[r] = 0;

    long cost = 0;
    for (int i = 0; i < V; ++i) {
        int mincost = INT_MAX / 2;
        int next = -1;
        for (int j = 0; j < V; ++j) {
            if (d[j] < mincost && c[j] != 1) {
                mincost = d[j];
                next = j;
            }
        }

        if (next == -1) break;
        cost += mincost;
        c[next] = 1;

        for (int k = 0; k < V; ++k) {
            if (g[next][k] && c[k] != 1 && d[k] > d[next] + g[next][k]) {
                d[k] = d[next] + g[next][k];
                p[k] = next;
            }
        }
    }
}

int main() {
    cin >> V >> E >> r;
    p.resize(V);
    d.resize(V, INT_MAX / 2);
    c.resize(V, 0);

    for (int i = 0; i < E; ++i) {
        int s, t, di;
        cin >> s >> t >> di;
        g[s][t] = di;
    }

    dijkstra();

    for (int j = 0; j < V; ++j) {
        if (d[j] == INT_MAX / 2) cout << "INF" << endl;
        else
            cout << d[j] << endl;

    }

    return 0;
}
*/
