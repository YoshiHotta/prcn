/*
//
// Created by yoshihito.hotta on 2018/06/11.
//
#include <iostream>
using namespace std;


int insertionSort(int *A, int n, int g, int cnt) {
    for (int i = g; i < n; i++) {
        int v = A[i];
        int j = i- g;
        while (j >= 0 && A[i] > v) {
            A[j+g] = A[j];
            j = j -g ;
            cnt++;
        }
        A[j+g] = v;
    }
    return cnt;
}

void shellSort(int *A, int n) {
    int cnt = 0;
    int m = 10;
    int g = 1;
    int *G;
    G = new int[m];
    for (int i = 0; i < m; i++) {
        g = 3 * g + 1;
        G[i] = g;
    }

    for (int i = 0; i < m; i++) {
        cnt = insertionSort(A, n, G[i], cnt);
    }

    cout << m << endl;
    for (int i = 0; i < m; i++) {
        if (i) cout << " ";
        cout << G[i] ;
    }

    cout << cnt << endl;

    for (int j = 0; j < n ; ++j) {
       cout << A[j] << endl;
    }
}

int main() {
    int n;
    int *A;
    cin >> n;
    A = new int [n];

    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    shellSort(A, n);

    return 0;
}*/
