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

int N;
vector<long long> A;
priority_queue<long long> pqfst;
priority_queue<long long> pqlst;


long long solve_first(int k, long long initsum ) {
    if(k == N-1) {
        return initsum;
    }

    long long a = pqfst.top(); pqfst.pop();
    long long v = min(-A[k], a);
    pqfst.push(v);

    return initsum + v - a;
}

long long solve_last(int k, long long initsum ) {
    if(k == 2 * N) {
        return initsum;
    }

    long long a = pqlst.top(); pqlst.pop();
    long long v = min(A[k], a);
    pqlst.push(v);

    return initsum + v - a;
}

int main() {
    cin >> N; A.resize(3*N);
    for (int i = 0; i < 3 * N; ++i) {
        cin >> A[i];
    }
    long long initsum1, initsum2;
    for (int k = 0; k < N; ++k) {
        pqfst.push(-A[k]);
        initsum1 += -A[k];
    }
    for (int l = 3*N-1; l >=2*N ; --l) {
        pqlst.push(A[l]);
        initsum2 += A[l];
    }

    vector<long long> ansfst(3*N);
    vector<long long> anslst(3*N);

    for (int m = N; m <= 2 * N - 1 ; ++m) {
        long long p = solve_first(m, initsum1);
        ansfst[m] = p;
        initsum1 = p;
    }
    for (int N = 2 * N; N >=N ; --N) {
        long long p = solve_last(N, initsum2);
        anslst[N] = p;
        initsum2 = p;
    }

    long long mm = INT_MIN;
    for (int j = N; j <= 2 * N; ++j) {
        mm = max(mm, -ansfst[j] - anslst[j+1]);
    }
    cout << mm << endl;

    return 0;
}
*/
