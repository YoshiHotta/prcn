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
    int N;
    cin >> N;
    int px, py,pt;
    px = py = pt = 0;
    bool flag = true;
    for (int i = 0; i < N; ++i) {
        int t, x,y;
        cin >> t >> x >> y;
        int d = abs(px-x) + abs(py-y);
        if(d > t - pt || (t - pt - d) % 2  == 1) {
            flag = false;
        }
        pt = t;
        px = x; py = y;
    }
    if(flag) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    cout << endl;

    return 0;
}
*/
