/*
#include <iostream>
using namespace std;

int x, y ;

int solve(int x, int y) {
    x = x % y;
    if (x == 0) return y;
    return solve(y, x);
}
int main() {

    cin >> x>> y;
    if ( x < y) swap (x, y);
    cout << solve(x, y) << endl;

    return 0;
}
*/
