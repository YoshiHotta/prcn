/*#include <iostream>

using namespace std;

int n;

struct Node {
    Node *p, *l, *r;
    int v;
};

Node *root;

void preorder(Node *nd) {
    if (nd == nullptr) return;
    cout << " " << nd->v;
    preorder(nd->l);
    preorder(nd->r);
}

void inorder(Node *nd) {
    if (nd == nullptr) return;
    inorder(nd->l);
    cout << " " << nd->v;
    inorder(nd->r);
}

void print() {
    inorder(root);
    cout << endl;
    preorder(root);
    cout << endl;
}

void insert(int k) {
    Node *z = root;
    Node *y = nullptr;

    while (z != nullptr) {
        if (k <= z->v) {
            y = z;
            z = z->l;
        } else {
            y = z;
            z = z->r;
        }
    }
    if (y == nullptr) {
        root = new Node;
        root->p = root->l = root->r = nullptr;
        root->v = k;
        return;
    }
    z = new Node;
    if (k <= y->v) {
        y->l = z;
    } else {
        y->r = z;
    }
    z->p = y;
    z->l = z->r = nullptr;
    z->v = k;
    return;
}

bool find(int k) {
    Node *x;
    x = root;
    bool flag = false;
    while (x != nullptr) {
        if (x->v < k) {
            x = x->r;
        } else if (k < x->v) {
            x = x->l;
        } else {
            flag = true;
            break;
        }
    }
    return flag;
}
*//*

void transplant(Node *z, Node *y) {
    if (z->p == nullptr) {
        root = y;
    }
    if (z->p->l == z) {
        z->p->l = y;
    } else if (z->p->r == z) {
        z->p->r = y;
    }
    if (y != nullptr) {
        y->p = z->p;
    }
}

Node *next_visit(Node *z) {
    Node *p = z;
    if (p->r != nullptr) {
        while (p->l != nullptr) {
            p = p->l;
        }
        return p;
    }
    Node *x = z;
    Node *y = z->p;
    while (y != nullptr && x == y->r)  {
        x = y;
        y = y->p;
    }
}

void delete_node(int k) {
    Node *z;
    z = root;
    while (z != nullptr) {
        if (z->v < k) {
            z = z->r;
        } else if (k < z->v) {
            z = z->l;
        } else {
            break;
        }
    }

    if (z->l == nullptr) {
        transplant(z, z->r);
    } else if (z->r == nullptr) {
        transplant(z, z->l);
    } else {
        Node *y = next_visit(z);
        if (y->r != nullptr) {
            y = y->r;
        }
        z = y;
    }
}
*//*

int main() {
    cin >> n;
    int k;
    string cmd;
    for (int i = 0; i < n; ++i) {
        cin >> cmd;
        if (cmd == "insert") {
            cin >> k;
            insert(k);
        } else if (cmd == "print") {
            print();
        } else if (cmd == "find") {
            cin >> k;
            if (find(k)) {
                cout << "yes" << endl;
            } else {
                cout << "no" << endl;
            }
        } else if (cmd == "delete") {
            cin >> k;
            delete_node(k);
        }
    }
    return 0;
}*/
