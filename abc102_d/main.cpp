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

long diff(long l, long m, long r, vector<long> &b) {
    long a = b[m] - b[l];
    long c = b[r] - b[m];
    return abs(a - c);
}

int main() {
    long N;
    cin >> N;
    vector<long> A(N + 1, 0);

    for (long i = 1; i <= N; ++i) {
        cin >> A[i];
    }
    for (long j = 1; j <= N - 1; ++j) {
        A[j + 1] += A[j];
    }

    long mindiff = INT_MAX;
    long l = 1;
    long r = 3;
    for (long m = 2; m <= N - 2; m++) {
        while (l <= m - 2 && diff(0, l, m, A) > diff(0, l + 1, m, A)) {
            l++;
        }
        while (r <= N - 2 && diff(m, r, N, A) > diff(m, r + 1, N, A)) {
            r++;
        }

        vector<long> p(4);
        p[0] = A[l] - A[0];
        p[1] = A[m] - A[l];
        p[2] = A[r] - A[m];
        p[3] = A[N] - A[r];
        long diff = *max_element(p.begin(), p.end()) - *min_element(p.begin(), p.end());
        mindiff = min(mindiff, diff);
    }
    cout << mindiff << endl;
    return 0;
}
*/
