/*
#include <iostream>
using namespace std;

int n, W;
int v[101], w[101];
int a[101][10001];

void solve() {
    a[0][0] = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= W; ++j) {
            if (j >= w[i] && a[i-1][j - w[i]] + v[i] > a[i-1][j]) {
                a[i][j] = a[i-1][j-w[i]] + v[i];
            } else {
                a[i][j] = a[i-1][j];
            }
        }
    }
}

int main() {
    cin >> n >> W;
    for (int i = 1; i <= n; ++i) {
        cin >> v[i] >> w[i];
    }

    for (int i = 0; i < 101; ++i) {
        for (int j = 0; j <= W; ++j) {
            a[i][j] = 0;
        }
    }

    solve();
    cout  << a[n][W] << endl;

    return 0;
}
*/
