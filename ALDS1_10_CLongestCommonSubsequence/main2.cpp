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

int solve(string X, string Y) {
    vector<vector<int > > dp ;
    dp.resize(X.length() + 1);
    for (int i = 0; i <= X.length(); ++i) {
        dp[i].resize(Y.length() + 1);
    }

    for (int k = 0; k <= Y.length(); ++k) {
        dp[0][k] = 0;
    }
    for (int k = 0; k <= X.length(); ++k) {
        dp[k][0] = 0;
    }

    for (int i = 1; i <= X.length(); ++i) {
        for (int j = 1; j <= Y.length(); ++j) {
            if (X[i] == Y[j]) {
                dp[i][j] = 1 + dp[i-1][j-1];
            } else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    return dp[X.length()][Y.length()];
}
int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        string X, Y;
        cin >> X >> Y;
        cout << solve(X, Y) << endl;
    }

    return 0;
}
*/
