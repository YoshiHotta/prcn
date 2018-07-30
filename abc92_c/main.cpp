/*
#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n+2);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    a[0] = a[n+1]=0;
    long long sum = 0;
    for (int j = 0; j <= n + 1; ++j) {
        sum += abs(a[j+1] - a[j]);
    }

    for (int k = 1; k <=n ; ++k) {
        if(a[k-1] <= a[k] && a[k] <= a[k+1]) cout << sum << endl;
        else {
            cout << sum - (abs(a[k] - a[k-1]) + abs(a[k] - a[k+1])) + abs(a[k-1] - a[k+1]) << endl;
        }
    }
    return 0;
}
*/
