/*
#include <iostream>
using namespace std;

int n;
int M[101][101];
int main() {
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int v, k;
        cin >> v >> k;
        for (int j = 0; j < k; ++j) {
            int s;
            cin >> s;
            M[v][s] = 1;
        }
    }

    for (int l = 1; l <= n; ++l) {
        for (int i = 1; i <= n; ++i) {
            cout << M[l][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
*/
