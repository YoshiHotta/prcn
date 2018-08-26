/*
#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <stack>
#include <cmath>
#include <queue>
#include <set>
#include <map>
using namespace std;

int main() {
    int x[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> x[i][j] ;
        }
        
    }
    int a[3], b[3];
    a[0] = 0;
    b[0] = x[0][0];
    b[1] = x[0][1];
    b[2] = x[0][2];
    a[1] = x[1][0] - b[0];
    a[2] = x[2][0] - b[0];
    bool flag = true;
    for (int k = 0; k < 3; ++k) {
        for (int i = 0; i < 3; ++i) {
            if(x[k][i] != a[k] + b[i]) {
                flag = false;
                break;
            }

        }

    }
    if(flag) cout << "Yes";
    else cout << "No";
    cout << endl;

    return 0;
}
*/
