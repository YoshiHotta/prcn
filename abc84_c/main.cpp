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
    cin >> n ;
    vector<int> c(n-1), s(n-1), f(n-1);
    for (int i = 0; i < n - 1; ++i) {
        cin >> c[i] >> s[i] >> f[i];
    }

    for (int k = 0; k < n - 1; ++k) {
        int t = -1;
        for (int j = k; j < n - 1; ++j) {
            t = max(t, s[j]);
            while(t % f[j]) t++;
            t += c[j];
        }
        cout << t << endl;
    }
    cout << 0 << endl;

    return 0;
}
*/
