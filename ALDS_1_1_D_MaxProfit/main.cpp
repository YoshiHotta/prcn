/*//
// Created by yoshihito.hotta on 2018/06/10.
//
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int *r;
    r = new int[n];

    for (int i = 0; i < n; i++){
        cin >> r[i] ;
    }

    int minr;
    int maxv;

    minr = r[0];
    maxv  = - INT_MIN;
    for (int i = 1; i < n; i ++) {
        if (r[i] - minr > maxv) {
            maxv = r[i] - minr;
        }
        if (r[i] < minr) {
            minr = r[i] ;
        }

    }

    cout << maxv << endl;


    return 0;
}*/
