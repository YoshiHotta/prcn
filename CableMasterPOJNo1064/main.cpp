/*
#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <cmath>
using namespace std;

int n = 4;
int k = 11;
double l[4] = {8.02, 7.43, 4.57, 5.39};

bool satif(double x) {
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        cnt += floor(l[i] / x);
    }
    return cnt >= k;
}

double bs() {
    double le = 0.0;
    double ri = 100000.0;
    double mi;

    while(ri - le > 0.001) {
        mi = (le + ri) / 2.0;
        if(satif(mi)) {
            le = mi;
        } else {
            ri = mi;
        }
    }
    return mi;
}

int main() {
    printf("%.2f\n", bs()) ;

    return 0;
}
*/
