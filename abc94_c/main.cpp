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
    vector<long> x(n);
    vector<long> y(n);
    for (int i = 0; i < n; ++i) {
        long p;
        cin >> p;
        x[i] = p;
        y[i] = p;
    }

    sort(y.begin(), y.end());
    double m = 0.5 * (y[n/2] + y[n/2 - 1]) ;
    vector<int> lr(n);
    for (int j = 0; j < n; ++j) {
        if(x[j] < m) cout << y[n/2] << endl;
        else cout << y[n/2-1] << endl;
    }



    return 0;
}
*/
