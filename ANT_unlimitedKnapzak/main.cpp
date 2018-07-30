/*
#include <iostream>

using namespace std;

int n = 3;
int w[3] = {3, 4, 2};
int v[3] = {4, 5, 3};
int W = 7;

int dp[4][9];

void solve() {
    for (int j = 0; j <= 8; j++) {
        dp[0][j] = 0;
    }
    for (int i = 0; i <= 3; ++i) {
        dp[i][0] = 0;
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= W; ++j) {
            if (j >= w[i])
                dp[i][j] = max(dp[i - 1][j], dp[i][j - w[i]] + v[i]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
}

int main() {
    solve();
    cout << dp[n][W] << endl;

    return 0;
}*/
