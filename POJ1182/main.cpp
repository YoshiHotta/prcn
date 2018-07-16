/*
#include <iostream>

using namespace std;
int N;
int K;

struct Node {
    Node *p;
};

Node nodes[10000000];

Node *find_root(int x) {
    Node *nd = nodes;
    while (nd->val != x) nd++;

    while (nd->p != nd) nd = nd->p;
    return nd;
}

void unite(int x, int y) {
    Node *xr = find_root(x);
    Node *yr = find_root(y);
    xr->p = yr;
}

bool same(int x, int y) {
    int xr = find_root(x)->val;
    int yr = find_root(y)->val;
    if (xr == yr) return true;
    else return false;
}

int op1(int x, int y) {
    if(x < 1 || x > N) return 1;
    if(y < 1 || y > N) return 1;
    if (same(3 * x, 3 * y + 1)) {
        return 1;
    }
    if (same(3 * x, 3 * y + 2)) {
        return 1;
    }
    if (same(3 * x + 1, 3 * y)) {
        return 1;
    }
    if (same(3 * x + 1, 3 * y + 2)) {
        return 1;
    }
    if (same(3 * x + 2, 3 * y)) {
        return 1;
    }
    if (same(3 * x + 2, 3 * y + 1)) {
        return 1;
    }
    unite(3 * x, 3 * y);
    unite(3 * x + 1, 3 * y + 1);
    unite(3 * x + 2, 3 * y + 2);
    return 0;
}

int op2(int x, int y) {
    if(x < 1 || x > N) return 1;
    if(y < 1 || y > N) return 1;
    if (same(3 * x, 3 * y)) return 1;
    if (same(3 * x + 1, 3 * y + 1)) return 1;
    if (same(3 * x + 2, 3 * y + 2)) return 1 ;
    unite(3 * x, 3 * y + 1);
    unite(3 * x + 1, 3 * y + 2);
    unite(3 * x + 2, 3 * y);
    return 0;
}

int main() {
    cin >> N >> K;
    for (int j = 0; j < 3 * N; ++j) {
        nodes[3 * j] = {&nodes[3 * j], 0};
        nodes[3 * j + 1] = {&nodes[3 * j + 1], 0};
        nodes[3 * j + 2] = {&nodes[3 * j + 2], 0};
    }
    int cnt = 0;
    for (int i = 0; i < K; ++i) {
        int op, x, y;
        cin >> op >> x >> y;
        if (op == 1) {
            cnt += op1(x, y);
        } else {
            cnt +=op2(x, y);
        }
    }
    cout << cnt << endl;

    return 0;
}
*/
