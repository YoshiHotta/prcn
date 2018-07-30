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

bool isprime[1000000];

void solve(int n) {
    int cnt = 0;
    for (int i = 2; i <= n ; ++i) {
        if(isprime[i]) {
            cnt++;
            for (int j = i*2; j <=n ; j = j + i) {
                isprime[j] = false;
            }
        }
    }
    cout << cnt << endl;
}

int main() {
    int n;
    while(cin>>n) {
        for (int i = 0; i <= n; ++i) {
            isprime[i] = true;
        }
        isprime[0] = isprime[1] = false;
        solve(n);
    }


    return 0;
}
*/
