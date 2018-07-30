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
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
    int m;
    cin >> m;
    vector<string> t(m);
    for (int i = 0; i < m; ++i) {
        cin >> t[i];
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    int cnt=0;
    int i,j,bi,bj;
    i = j = bi = bj = 0;

    int sum = 0;
    while(bi < s.size()) {
        if(i < s.size() && s[i] == s[bi]) {
            i++;
            continue;
        }
        int cnt = 0;
        for (int k = 0; k < t.size(); ++k) {
            if(s[bi] == t[k]) cnt++;
        }
        if(i-bi > cnt) sum = max(sum, i-bi - cnt);
        bi= i;

    }
    cout << sum << endl;


    return 0;
}
*/
