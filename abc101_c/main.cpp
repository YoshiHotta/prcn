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

int main() {
    int N, K;
    cin >> N >> K ;
//    vector<int> a(N); int M;
//    for (int i = 0; i < N; ++i) {
//        int b;
//        cin >> b;
//        if(b == 1) {
//            a[i] = 1;
//            M = i;
//        }
//        else a[i] = 2;
//    }
//    int m = INT_MAX;
//    for (int l = 0; l < K; ++l) {
//        int r = min(N-1, M + K);
//        int ans =0;
//        if((N - r) % (K-1) == 0) ans += (N - r) / (K-1);
//        else ans += (N - r) / (K-1) + 1;
//
//        int L = max(M - l,0);
//        if(L % (K-1) == 0) ans += L / (K-1) ;
//        else ans += L / (K-1) +1;
//        m = min(ans, m);
//    }
//    cout << m << endl;
    int m = 1;
    N -= K;
    if(N % (K-1) == 0) m += N / (K-1);
    else m += N / (K-1) + 1;
    cout << m << endl;

    return 0;
}
*/
