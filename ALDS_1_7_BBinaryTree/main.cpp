/*
#include <iostream>
using namespace std;

int N;
struct Node {
    int l, r, p;
};

Node *nd;

int depth (int k ) {
    int d = 0;
    while (nd[k].p != -1) {
        d++;
        k = nd[k].p;
    }
    return d;
}

int *H;
int height (int k) {
    int h1 = 0,h2 = 0;
    if (nd[k].l != -1) {
        h1  = 1+ height(nd[k].l);
    }
    if (nd[k].r != -1) {
        h2 = 1 + height(nd[k].r);
    }
   H[k] = max(h1,h2);
    return H[k];
}

string type(int k) {
   if (nd[k].p == -1) {
       return "root";
   } else if (nd[k].l == -1 && nd[k].r == -1) {
        return  "leaf";
    } else {
        return "internal node";
    }
}
//　　　node id: parent = p, sibling = s, degree = deg, depth = dep, height = h, type
void print(int k) {
    cout << "node " <<  k << ": parent = " << nd[k].p << ", sibling = ";
    int sb = -1;
    if (nd[k].p != -1) {
      if( nd[nd[k].p].l == k)  sb = nd[nd[k].p].r;
        else  sb = nd[nd[k].p].l;
    }

    cout << sb << ", degree = ";
    int dg = 0;
    if (nd[k].l != -1) dg++ ;
    if (nd[k].r != -1) dg++;
    cout << dg << ", depth = " << depth(k) << ", height = " << H[k] << ", " << type(k) << endl;
}

int main() {
    cin >> N;
    int id, l, r;
    nd = new Node[N];
    H = new int [N];
    for (int j = 0; j < N; ++j) {
        nd[j].l = nd[j].r = nd[j].p = -1;
        H[j] = -1;
    }

    for (int i = 0; i < N; ++i) {
        cin >> id >> l >> r;
        nd[id].l = l; nd[id].r = r; nd[l].p = id; nd[r].p = id;
    }

    int root ;
    while (nd[root].p != -1) { root = nd[root].p; }
    height(root);

    for (int k = 0; k < N; ++k) {
        print(k);
    }

    return 0;
}
*/
