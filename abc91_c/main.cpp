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
    vector<pair<int, int> > r, b;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        r.push_back(make_pair(a,b));
    }
    for (int i = 0; i < n; ++i) {
        int a, c;
        cin >> a >> c;
        b.push_back(make_pair(a,c));
    }
    sort(r.begin(), r.end());
    sort(b.begin(), b.end());
    int cnt = 0;
    set<int> use;
    for (int j = b.size()-1; j >=0 ; --j) {
        for (int i = r.size()-1; i >= 0 ; --i) {
            if(b[j].first > r[i].first && b[j].second > r[i].second  && use.find(i) == use.end()) {
                cnt++;
                use.insert(i);
                break;
            }
        }

    }

    cout << cnt << endl;

    return 0;
}
*/
