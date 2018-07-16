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

int solve(vector<int> A, int N, int S) {
    int l, r;
    l = 0;
    r = -1;
    int sum = 0;
    int m = INT_MAX;
    while (true) {
        if (sum >= S) {
            m = min(m, r - l + 1);
            sum = sum - A[l];
            l++;
        } else {
            if(r == N-1){
                break;
            }
            sum += A[++r];
        }
    }
    if(m == INT_MAX) return 0;
    return m;
}

int main() {
    int P;
    cin >> P;
    vector<int> A;
    for (int i = 0; i < P; ++i) {
        int N, S;
        cin >> N >> S;
        A.resize(N);
        for (int j = 0; j < N; ++j) {
            int a;
            cin >> a;
            A[j] = a;
        }
        cout << solve(A, N, S) << endl;
    }

    return 0;
}*/
