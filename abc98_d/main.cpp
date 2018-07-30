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

int main() {
    int n;
    cin >> n;
    vector<long long> x(n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }

    int r=0;
    long p = 0;
    long m = 0;
    for (int l = 0; l < n; ++l) {
        while(r < n && ((p ^ x[r]) == x[r] + p)) {
            p = p^x[r];
            r++;
        }
        m += r - l;
        p = p^x[l];
    }
    cout << m << endl;
    return 0;
}*/
