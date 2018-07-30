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
vector<int> g[101];
vector<int> d(101);
vector<int> p(101);
vector<int> vis(101);

void prim() {
    for (int i = 0; i < n; ++i) {
        vis[i] = 0;
        d[i] = INT_MAX;
        p[i] = -1;
    }

    d[0] = 0;
    while (true) {
        int mincost = INT_MAX;
        int next = -1;
        for (int i = 0; i < n; ++i) {
            if (vis[i] == 0 && d[i] < mincost) {
                mincost = d[i];
                next = i;
            }
        }
        if (next == -1) break;
        vis[next] = 1;

        for (int j = 0; j < n; ++j) {
            if (g[next][j] < d[j] && vis[j] != 1 && g[next][j] != -1) {
                p[j] = next;
                d[j] = g[next][j];
            }
        }
    }
}

typedef struct edge {
    int s;
    int t;
    int c;
} Edge;

bool cmp(Edge e1, Edge e2) {
    return e1.c < e2.c;
}

struct Node {
    Node *p;
    int val;
    int d; // depth
};

Node nodes[10000];

Node *find_root(int x) {
    Node *nd = &nodes[x];
    while (nd->p != nd) nd = nd->p;
    return nd;
}

void unite(int x, int y) {
    Node *xr = find_root(x);
    Node *yr = find_root(y);
    if (xr->d < yr->d) {
        xr->p = yr;
    } else {
        yr->p = xr;
        if (xr->d == yr->d) {
            (xr->d)++;
        }
    }
}

bool same(int x, int y) {
    auto xr = find_root(x);
    auto yr = find_root(y);
    return xr == yr;
}

void kruskal() {
    vector<Edge> es;
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            if (g[i][j] == -1) continue;
            Edge e = {i, j, g[i][j]};
            es.push_back(e);
        }
    }

    sort(es.begin(), es.end(), cmp);

    for (int k = 0; k < n; ++k) {
        nodes[k].p = &nodes[k];
    }

    int cnt = 0;
    int ie = 0;
    int cost = 0;
    while (cnt != n - 1) {
        if (!same(es[ie].s, es[ie].t)) {
            unite(es[ie].s, es[ie].t);
            cnt ++;
            cost += es[ie].c;
        }
        ie++;
    }
    cout << cost << endl;

}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int v;
            cin >> v;
            g[i].push_back(v);
        }
    }

    kruskal();

//    prim();
//    long cst = 0;
//    for (int k = 0; k < n; ++k) {
//        cst += d[k];
//    }
//    cout << cst << endl;

    return 0;
}
*/
