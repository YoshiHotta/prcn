/*
#include <iostream>
using namespace std;
int n;
int q;

struct Node {
    Node *p;
    int val;
    int d; // depth
};

Node nodes[10000];

Node *find_root(int x) {
   Node *nd = nodes;
   while(nd->val != x) nd++;

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
    int xr = find_root(x)->val;
    int yr = find_root(y)->val;
    if(xr == yr) return true;
    else return false;
}
int main() {
    cin >> n >> q;
    for (int i = 0; i < n; ++i) {
        nodes[i].p = &nodes[i];
        nodes[i].val = i;
        nodes[i].d = 0;
    }
    for (int j = 0; j < q; ++j) {
        int cmd, x, y;
        cin >> cmd >> x >> y;
        if (cmd == 0) {
            unite(x, y);
        } else {
            if(same(x, y)) {
                cout << 1 << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }


    return 0;
}
*/
