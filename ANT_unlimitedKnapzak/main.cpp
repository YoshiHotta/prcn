/*
#include <iostream>

using namespace std;

int N, W;
int w[101], v[101];
int dp[101][10001];

int solve(int i, int j) {
    if(i == -1) return 0;

    int mm = INT_MIN;
    for (int k = 0; k < j / w[i]; ++k) {
        mm = max(mm, solve(i - 1, j - k * w[i]));
    }
    return mm;
}

int main() {
    cin >> N >> W;
    for (int i = 0; i < N; ++i) {
        int a, b;
        cin >> a >> b;
        w[i] = a;
        v[i] = b;
    }
    solve(N-1, W);
    return 0;
}
*/
