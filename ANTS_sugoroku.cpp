/*
#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <cmath>
#include <stack>
#include <queue>
#include <set>
#include <map>
using namespace std;

tuple<double , double , double> exteuclid(int a, int b) {
    assert(a >= b);
    if (b == 0) {
        return make_tuple((double)a, 1.0, 0.0);
    }else {
        auto dxyp = exteuclid(b, a % b);
        double dp = get<0>(dxyp);
        double xp = get<1>(dxyp);
        double yp = get<2>(dxyp);
        return make_tuple(dp, yp, xp - floor(a/b) * yp);
    }
};

int main() {
    int a = 4, b = 11;
    auto t = exteuclid(max(a,b), min(a,b));
    int d = (int)get<0>(t);
    int x = (int)get<1>(t);
    int y = (int)get<2>(t);

    if(d != 1){
        cout << -1 << endl;
    } else {
        cout << abs(x) + abs(y) << endl;
    }

    return 0;
}
*/
