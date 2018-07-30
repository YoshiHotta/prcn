/*
#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <cmath>
#include <map>

using namespace std;

bool isprime[1000001];

int solve(int n) {
    for (int i = 0; i <= n; ++i) {
        isprime[i] = true;
    }
    isprime[0] = isprime[1] = false;
    int cnt = 0;
    for (int i = 2; i <= n; ++i) {
        if (isprime[i]) {
            cnt++;
            for (int j = i * 2; j <= n; j = j + i) {
                isprime[j] = false;
            }
        }
    }
    return cnt;
}

int main() {
    int a, b;
    cin >> a >> b;
    int na = solve(ceil(sqrt(a-1)));
    int nb = solve(ceil(sqrt(b-1)));
    cout << nb - na << endl;


    return 0;
}

*/
