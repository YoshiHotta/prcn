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
    int a[100][100];
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    for (int k = 0; k < 2; ++k) {
        for (int i = 1; i < n; ++i) {
            a[k][i] += a[k][i-1];
        }
    }

    int res = INT_MIN;
    for (int l = 0; l < n; ++l) {
        res = max(res, a[0][l] + a[1][n-1] - a[1][l-1]);
    }
    res = max(res, a[0][0] + a[1][n-1]);

    cout <<res << endl;

    return 0;
}
*/
