/*
#include <iostream>
#include <vector>

using namespace std;

int N, R;
vector<int> X;

void solve() {
    sort(X.begin(), X.end());
    int l = X[0];
    int i = 0; int n  = 0;
    while(i < N) {
        if(X[i] < l + R) {i++;}
        else {
            n++;
            i--;
            int j = i+1;
            while(X[j] < X[i] + R) {j++;}
            i = j;
            l = X[i];
        }
    }
    cout << n << endl;
}
int main() {
    cin >> N>>R;
    X.resize(N);
    for (int i = 0; i < N; ++i) {
        cin >> X[i];
    }
    solve();

    return 0;
}
*/
