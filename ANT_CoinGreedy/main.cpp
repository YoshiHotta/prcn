/*
#include <iostream>
using namespace std;

int c[6];
int amt[6] = {1,5,10,50,100,500};
int A ;

void solve() {
    int rest = A ;
    int total = 0;
    for (int i = 5; i >=0; --i) {
        int n = min(rest / amt[i], c[i]);
        rest -= amt[i] * n;
        total += n;
        if(!rest) break;
    }
    cout << total << endl;
}
int main() {
    for (int i = 0; i < 6; ++i) {
        int a;
        cin >> a;
        c[i] = a;
    }
    cin >>A ;
    solve();


    return 0;
}
*/
