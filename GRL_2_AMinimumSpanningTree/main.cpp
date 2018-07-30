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

int v, e;


typedef struct edge {
    int s;
    int t;
    int w;
} Edge;

vector<Edge> es;

struct Node {
    Node *p;
    int d; // depth
};

Node nodes[10000];

Node *find_root(int x) {
    Node *nd = &nodes[x];
    while(nd->p != nd) nd = nd->p;
    return nd;
}

void unite(int x, int y) {
    Node *xr = find_root(x);
    Node *yr = find_root(y);
    if(xr->d < yr -> d){
        xr->p = yr;
    } else {
        yr->p = xr;
        if(xr->d == yr -> d){
            (xr->d)++;
        }
    }
}

bool same(int x, int y) {
    auto xr = find_root(x);
    auto yr = find_root(y);
    return xr == yr;
}

bool cmp(Edge x, Edge y) {
    return x.w < y.w;
}

int kruskal() {
    sort(es.begin(), es.end(), cmp);
    int cost = 0;
    for (int i = 0; i < e; ++i) {
        Edge e = es[i];
        if(!same(e.s, e.t)) {
            unite(e.s, e.t);
            cost += e.w;
        }
    }
    return cost;
}

int main() {
    cin >> v >> e ;
    es.resize(e);
    for (int j = 0; j < v; ++j) {
        nodes[j].p = &nodes[j];
    }
    for (int i = 0; i < e; ++i) {
        int s,t ,w;
        cin >> s >> t >> w;
        Edge e = {s,t,w};
        es[i] = e;
    }

    cout << kruskal() << endl;

    return 0;
}
*/
