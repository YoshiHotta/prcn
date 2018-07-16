/*
#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <cmath>
using namespace std;

int main() {
    long N;
    scanf("%d", &N);
    vector<long> cnt(N+1,0);

    for (long i = 0; i <= N; ++i) {
        long p = 0;
        long rst = i;
        while(rst > 0) {
            rst -= pow(6, floor(log(rst) / log(6)));
            p++;
        }
        rst = N - i;
        while(rst > 0) {
            rst -= pow(9, floor(log(rst) / log(9)));
            p++;
        }
        cnt[i] = p;
    }
    cout << *min_element(cnt.begin(), cnt.end()) << endl;

    return 0;
}
*/
