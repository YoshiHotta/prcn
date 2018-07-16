/*
//
// Created by yoshihito.hotta on 2018/06/10.
//
#include <iostream>
#include <algorithm>

using namespace std;

bool isstable(char *c1, char *c2, int n) {
    bool flag = true;
    for (int i = 0; i < n; i++) {
        if (c1[i] != c2[i]) {
            flag = false;
            break;
        }
    }

    return flag;
}

void bubble(int *a, char *c, int n) {
    for (int i = 0; i < n; i++) {
        int j = n - 1;
        while (j > i) {
            if (a[j] < a[j - 1]) {
                swap(a[j], a[j - 1]);
                swap(c[j], c[j - 1]);
            }
            j--;
        }
    }
}

void selection(int *a, char *c, int n) {
    for (int i = 0; i < n; i++) {
        int minj = i;
        int mina = a[i];
        for (int j = i; j < n; j++) {
            if (a[j] < mina) {
                minj = j;
                mina = a[j];
            }
        }
        swap(a[i], a[minj]);
        swap(c[i], c[minj]);
    }
}

int main() {
    int n;
    int *a1, *a2;
    char *c1, *c2;

    cin >> n;
    a1 = new int[n];
    a2 = new int[n];
    c1 = new char[n];
    c2 = new char[n];

    for (int i = 0; i < n; i++) {
        cin >> c1[i] >> a1[i];
        c2[i] = c1[i];
        a2[i] = a1[i];
    }
    bubble(a1, c1, n);
    selection(a2, c2, n);
    for (int i = 0; i < n; i++) {
        if(i) cout << " ";
        cout << c1[i] << a1[i] ;
    }
    cout << endl;
    cout << "Stable" << endl;
    for (int i = 0; i < n; i++) {
        if(i) cout << " ";
        cout << c2[i] << a2[i] ;
    }
    cout << endl;

    if (isstable(c1, c2, n)) cout << "Stable" << endl;
    else cout << "Not stable" << endl;

    return 0;
}

*/
