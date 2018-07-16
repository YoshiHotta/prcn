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
    int N;
    vector<int> a;
    cin >> N ;
    a.resize(N);
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }

    int sum = 0;
    for (int j = 0; j < N; ++j) {
        while (a[j] % 2 == 0) {
            a[j] /= 2;
            sum++;
        }
    }
    cout << sum << endl;

    return 0;
}

