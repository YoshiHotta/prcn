/*
#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    int p = a[n-1];
    vector<long> b(n);
    double mm = INT_MAX;
    int q;
    for (int j = 0; j < n; ++j) {
        if(abs(a[j] - p/2.0) < mm) {
            mm = abs(1.0 * a[j] - p/2.0);
            q = a[j];
        }
    }
    cout << p << " " << q << endl;

    return 0;
}
*/
