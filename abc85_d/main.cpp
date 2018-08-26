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

int main() {
    long long n,h;
    cin >> n >> h;
    vector<long long> a(n), b(n);
    for (long long i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
    }
    long long am = *max_element(a.begin(), a.end());
    vector<long long> th;
    sort(b.begin(), b.end(), greater<long long>());
    for (long long j = 0; j < n; ++j) {
        if(b[j] > am) {
            th.push_back(b[j]);
        }
    }

    long long res = 0;
    while(h>0) {
        if(res < th.size()) {
            h-= th[res];
        }
        else {
            h-= am;
        }
        res++;
    }
    cout << res;


    return 0;
}
*/
