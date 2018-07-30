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

int kruskal(vector<Edge> es, int n) {
    sort(es.begin(), es.end(), cmp);

    for (int k = 0; k < n; ++k) {
        nodes[k].p = &nodes[k];
    }

    int cnt = 0;
    int ie = 0;
    int cost = 0;
    while (cnt != n - 1 && ie < es.size()) {
        if (!same(es[ie].s, es[ie].t)) {
            unite(es[ie].s, es[ie].t);
            cnt ++;
            cost += es[ie].c;
        }
        ie++;
    }
    return cost;

}

int main() {
    int t;
    cin >>t ;
    for (int i = 0; i < t; ++i) {
        int n,m,r;
        cin >> n >> m >> r;
        vector<Edge> es;
        for (int j = 0; j < r; ++j) {
            int x,y,d;
            cin >> x >> y >> d;
            Edge e = {x,n + y,-d};
            es.push_back(e);
        }
       cout << 10000 * (n+m) + kruskal(es, n + m) << endl;
    }

    return 0;
}
*/
