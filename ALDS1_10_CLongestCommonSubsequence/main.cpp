/*
#include <iostream>
using namespace std;

int h[1001][1001];
string A;
string B;

void f(int i, int j) {
    if (A.at(i) == B.at(j)) {
            h[i][j] = h[i-1][j-1] + 1;
    } else {
        h[i][j] = max(h[i][j-1], h[i-1][j]);
    }
}

int lcs(string A, string B) {
    for (int i = 1; i <= A.length()-1; ++i) {
        for (int j = 1; j <= B.length()-1; ++j) {
            f(i, j);
        }

    }
    return h[A.length()-1][B.length()-1];
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> A;
        cin >> B;
        A = " " + A;
        B = " " + B;
        int a = lcs(A, B);
        cout << a << endl;
    }

    return 0;
}
*/
