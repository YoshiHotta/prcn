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
    int n,y;
    cin >> n >> y;

    int p,q,r;
    p = q = r = -1;
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= n-i ; ++j) {
            int k = n-i-j;
                if(10000*i+5000*j+1000*k == y) {
                    p = i; q = j; r = k;
            }
        }
    }

    cout << p << " " << q << " " << r << endl;

    return 0;
}
*/
