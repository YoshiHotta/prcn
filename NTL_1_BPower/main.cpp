/*
#include <iostream>

using namespace std;

long m, n;
long denom = 1000000007;

long solve(long m, long n) {
    long res;
    if (n == 0) return 1;

    if (n % 2 == 0) {
        return solve(m * m % denom, n / 2);
    } else {
        return solve( m * m %denom, n/2) * m % denom;
    }

}

int main() {
    cin >> m >> n;
    cout << solve(m, n) << endl;


    return 0;
}
*/
