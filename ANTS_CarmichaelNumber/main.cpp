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
typedef long long ll;
ll mod_pow(ll x, ll n, ll mod) {
    if(n == 0) return 1;
    if(n % 2 == 0) {
        return mod_pow(x * x % mod, n/2, mod);
    } else {
        return x * mod_pow(x * x % mod, n/2, mod) % mod;
    }
}

int main() {
    int n;
    cin >> n;
    bool flag = true;
    for (int i = 2; i < n; ++i) {
        if(mod_pow(i,n,n) != i){
            flag = false;
            break;
        }
    }
    if(flag) cout << "Yes";
    else cout << "No";

    return 0;
}
*/
