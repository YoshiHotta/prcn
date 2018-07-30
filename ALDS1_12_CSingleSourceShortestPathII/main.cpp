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

int n;
vector<pair<int, int> > es[10001];
vector<int> d(10001);
vector<int> c(10001);

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}

priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > q;

int MX = INT_MAX / 3;

void dijkstra() {
    for (int i = 0; i < n; ++i) {
        d[i] = MX;
        c[i] = 0;
    }
    q.push(make_pair(0, 0));
    d[0] = 0;

    while(!q.empty()) {
        auto next = q.top(); q.pop();
        if(next.first > d[next.second]) continue;

        c[next.second] = 1;
        for (auto v : es[next.second]) {
            if(d[next.second] + v.first < d[v.second] && c[v.second] == 0) {
                d[v.second] = d[next.second] + v.first;
                q.push(make_pair(d[v.second], v.second));
            }
        }
    }

}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; ++j) {
            int v, c;
            cin >> v >> c;
            es[i].push_back(make_pair(c, v));
        }
    }
    dijkstra();

    for (int l = 0; l < n; ++l) {
        cout << l << " " << d[l] << endl;
    }

    return 0;
}
*/
