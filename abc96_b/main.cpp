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
    int a,b,c,k;
    cin >> a >> b >>c >>k;
    int m = a + b + c;
    int mm = max({a,b,c});
    m -= mm;
    for (int i = 0; i < k; ++i) {
        mm*=2;
    }
    cout << m+mm << endl;

    return 0;
}
*/
