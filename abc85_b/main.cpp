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

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), less<int>());

    int prev = -1;
    int res = 0;
    for (int j = 0; j < n; ++j) {
        if(a[j] > prev) {
            res ++;
            prev = a[j];
        }
    }
    cout << res << endl;

    return 0;
}
*/
