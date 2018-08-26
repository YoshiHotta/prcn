/*
#include <iostream>
#include <cmath>

using namespace std;

int n ;
bool isprime(int a) {
    if (a <= 1) return false;
    for (int i = 2; i <= sqrt(a) ; ++i) {
        if (a % i == 0) return false;

    }
    return true;

}
int main() {
    cin >> n;

    int sol = 0;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >>  a;
        if(isprime(a)) sol++;

    }
    cout << sol << endl;

    return 0;
}
*/
