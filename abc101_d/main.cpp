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

double sunuke(int a) {
    int A = a;
    int S = 0;
    while(a != 0) {
        int b = a % 10;
        a = (a-b)/ 10;
        S += b;
    }
    return 1.0 * A / S;
}

int main() {
    int K;
    cin >> K;

    int cnt=0;
    long S = 1;
    int digit = 0;
    while (cnt < 27) {
        for (int i = 2; i <= 10 && cnt < K; ++i) {
            long x = i * pow(10, digit) - 1;
            cout << x << endl;
            cnt++;
        }
        digit++;
    }

    while (cnt < K) {


    }

    return 0;
}
*/
