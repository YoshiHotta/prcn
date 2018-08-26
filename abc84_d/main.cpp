/*
#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <stack>
#include <cmath>
#include <queue>
#include <set>
#include <map>
using namespace std;
bool isprime(int a) {
    for (int i = 2; i <= sqrt(a) ; ++i) {
        if (a % i == 0) return false;

    }
    return true;
}

bool like(int x) {
    return x > 1 && ( x %2 == 1) && isprime(x) && isprime((x+1)/2);
}
int main() {
    int q;
    cin >> q;

    vector<int> z(1000001, 0);
    for (int j = 1; j <=100000 ; ++j) {
        if(like(j))
            z[j] = 1;
    }

    for (int k = 1; k <= 100000; ++k) {
        z[k] += z[k-1];
    }

    for (int i = 0; i < q; ++i) {
        int l,r;
        cin >> l >>r;
        cout << z[r] - z[l-1] << endl;
    }

    return 0;
}
*/
