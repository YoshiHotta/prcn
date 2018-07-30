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

bool isprime(int a) {
    for (int i = 2; i <= sqrt(a) ; ++i) {
        if (a % i == 0) return false;

    }
    return true;

}

int main() {
    vector<int> p;
    int cnt = 0;
    int n;
    cin >> n;
    for (int i = 2; i <=5555 ; ++i) {
        if(isprime(i) && i % 5 == 1) {
            p.push_back(i);
            cnt++;
            if(cnt > n) break;
        }
    }

    for (int j = 0; j < n; ++j) {
        if(j) cout << " ";
        cout << p[j];
    }


    return 0;
}
*/
