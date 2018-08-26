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

int N = 5;
int M = 3;
vector<int> x = {1, 2, 8, 4, 9};

bool valid(int d) {
    int i, cnt;
    i = 0;
    cnt = 1;
    int prev = x[0];
    while(cnt < M) {
        while(i < N && x[i] - prev < d) {
            i++;
        }
        cnt ++;
        prev = x[i];
        if(i == N) return false;
    }
    return true;
}

int main() {
    sort(x.begin(), x.end());
    int l = 0;
    int r  = 1000000001;
    while(r - l > 1) {
        int m = (l + r ) / 2;
        if(valid(m)) {
            l = m;
        } else {
            r = m;
        }
    }
    cout << l << endl;

    return 0;
}
*/
