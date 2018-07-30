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

struct Node {
    Node *p;
    int d;
};

Node nodes[100002];

Node *find_root(int i) {
    Node *nd = &nodes[i];
    while(nd->p != nd) nd = nd->p;
    return nd;
}

void unite(int i, int j) {
    Node *xr = find_root(i);
    Node *yr = find_root(j);
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
int main() {
    int n,m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        nodes[i].p = &nodes[i];
        nodes[i].d = 0;
    }
    int p[100002];
    for (int j = 1; j <=n ; ++j) {
        cin >> p[j];
    }
    for (int k = 0; k < m; ++k) {
        int x, y;
        cin >> x >> y;
        unite(x,y);
    }
    int cnt = 0;
    for (int l = 1; l <= n; ++l) {
        if(same(p[l], p[p[l]])) cnt++;
    }
    cout << cnt <<endl;


    return 0;
}
*/
