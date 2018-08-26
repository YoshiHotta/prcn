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

int n = 3;
int k = 2;
int w[3] {2,5,2};
int v[3] {2,3,1};

bool valid(double x) {
    vector<double > p(n);
    for (int i = 0; i < n; ++i) {
        p[i] = v[i] - x * w[i];;
    }
    sort(p.begin(), p.end());
    double sum = 0;
    for (int j = 0; j < k; ++j) {
        sum += p[n-j-1];
    }
    return sum >= 0;
}

int main() {
    double l,r,m;
    l = 0;
    r = 10000000;
    while (r - l > 0.0001) {
        m = (l +r) / 2.0;
        if(valid(m)) {
            l = m;
        } else {
            r = m;
        }
    }
    printf("%.2f\n", m);

    return 0;
}
*/
