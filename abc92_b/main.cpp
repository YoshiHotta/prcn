/*
#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
using namespace std;

int main() {
    int n,d,x;
    cin >> n >> d >> x;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j <= d ; j+=a[i]) {
            sum++;
        }
    }
    cout << sum + x << endl;

    return 0;
}*/
