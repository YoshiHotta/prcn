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
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> a(m);

    for (int i = 0; i < m; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    auto it = lower_bound(a.begin(), a.end(), x);
    int p = distance(a.begin(), it);
    cout << min({p, m-p}) << endl;

    return 0;
}
*/
