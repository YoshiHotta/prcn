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
    int n, k;
    cin >> n >> k;
    int a[1001][1001];
    int sum = 0;
    for (int j = 0; j <= n; ++j) {
        for (int i = 0; i <= n; ++i) {
            a[j][i] = 0;
        }
    }

    for (int i = 0; i < n; ++i) {
        int x, y;
        char c;
        cin >> x >> y >> c;
        if (c == 'W') {
            x += k;
            y += k;
        }
        x %= 2 * k;
        y %= 2 * k;
        a[x][y]++;
        if (x < k && y < k) sum++;
    }

    int res = INT_MIN;
    for (int i = 0; i < k; ++i) {
        for (int j = 0; j < k; ++j) {
            res = max(res, sum);

            for (int l = 0; l < k; ++l) {
                sum -= a[i][l + j];
                sum -= a[l + i][j];
                sum += a[i + k][l + j];
                sum += a[l + i][j + k];
            }
        }
    }
    cout << res << endl;


    return 0;
}
*/
