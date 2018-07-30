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

int gcd(int a, int b) {
    int s = max(a,b);
    int t = min(a,b);
    if(s % t != 0) {
        int u = s % t;
        return gcd(u, t);
    } else {
        return t ;
    }
}

int main() {
    int x1 = 1, y1 = 10, x2 = 5, y2 = 3;
    int g = gcd(abs(x1 - x2), abs(y1-y2));
    cout << abs(x1-x2) /g  - 1 << endl;


    return 0;
}
*/
