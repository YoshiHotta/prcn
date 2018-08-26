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

int N = 7;
string s = string(" ", 10000);
int solve(int k) {
    int res = 0;
    vector<int> f(N, 0);
    int sum = 0;

    for (int i = 0; i + k -1< N; ++i) {
        if(((s[i] == 'B')+ sum) % 2) {
            res++;
            f[i] = 1;
            sum++;
        }
        if(i- k+1 >= 0) sum -= f[i-k+1];
    }

    bool flag  = true;
    for (int j = N-k+1; j < N; ++j) {
        if(((s[j] == 'B') + sum)%2) {
            flag = false; break;
        }
    }
    if(flag) return res;
    else return -1;
}

int main() {
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> s[i];
    }

    int res = INT_MAX;
    int kk = 1;
    for (int k = 1; k <= N-1 ; ++k) {
        int aa = solve(k);
        if(aa != -1) {
            res = min(res,aa);
            kk = k;
        }
    }
    cout << kk << " " << res << endl;

    return 0;
}
*/
