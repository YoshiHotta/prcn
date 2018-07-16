/*
#include <iostream>
using namespace std;

int N, M;
int a[102][102];

void solve(int i, int j) {
    if(a[i-1][j-1]) {
        a[i-1][j-1] = 0;
        solve(i-1, j-1);
    }
    if(a[i][j-1]) {
        a[i][j-1] = 0;
        solve(i, j-1);
    }
    if(a[i+1][j-1]) {
        a[i+1][j-1] = 0;
        solve(i+1, j-1);
    }
    if(a[i-1][j]) {
        a[i-1][j] = 0;
        solve(i-1, j);
    }
    if(a[i+1][j]) {
        a[i+1][j] = 0;
        solve(i+1, j);
    }
    if(a[i-1][j+1]) {
        a[i-1][j+1] = 0;
        solve(i-1, j+1);
    }
    if(a[i][j+1]) {
        a[i][j+1] = 0;
        solve(i, j+1);
    }
    if(a[i+1][j+1]) {
        a[i+1][j+1] = 0;
        solve(i+1, j+1);
    }
}

int main() {
    cin >> N >> M ;
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= M; ++j) {
            char c;
            cin >>  c ;
            if(c == '.') a[i][j] = 0;
            else a[i][j] = 1;
        }
    }

    int count = 0;
    for (int k = 1; k <= N; ++k) {
        for (int i = 1; i <= M; ++i) {
            if(a[k][i]) {
                solve(k,i);
                count ++;
            }
        }
    }
    cout << count << endl;

    return 0;
}
*/
