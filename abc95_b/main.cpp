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
    int n, x;
    cin >> n >> x;
    vector<int> m(n);
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> m[i];
        sum += m[i];

    }

    x -= sum;
    int mm = *min_element(m.begin(), m.end());
    cout << n + x / mm << endl;




    return 0;
}
*/
