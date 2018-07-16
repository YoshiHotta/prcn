/*
#include <iostream>
#define NMAX 10000
using namespace std;

int N ;
int a[NMAX];


int solve(){
    int L[NMAX];
    L[0] = a[0];
    int l = 0;
    for (int i = 1; i < N; ++i) {
        if(a[i] < L[l]) {
            int j = 0;
            for (j = 0; j < l-1; ++j) {
                if(a[i] > L[j]) break;
            }
            L[j] = a[i];
        } else {
            l++;
            L[l] = a[i];
        }
    }
    return l+1;
}
int main() {
    cin >> N ;
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }

    cout << solve() << endl;


    return 0;
}
*/
