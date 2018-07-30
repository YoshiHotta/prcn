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

int n, E;
vector<pair<int, int> > es[10001];
vector<int> d(10001);
vector<int> d2(10001);
vector<int> c(10001);

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}

priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > q;

int MX = INT_MAX / 3;

void dijkstra() {
    for (int i = 1; i <= n; ++i) {
        d[i] = MX;
        d2[i] = MX;
        c[i] = 0;
    }
    q.push(make_pair(0, 1));
    d[1] = 0;

    while (!q.empty()) {
        auto next = q.top();
        q.pop();
        if (next.first > d2[next.second]) continue;

        for (auto v : es[next.second]) {
            int d22 = next.first + v.first;
            if(d22 < d[v.second]) {
                swap(d22, d[v.second]);
                q.push(make_pair(d[v.second], v.second));
            }
            if(d22 > d[v.second] && d22 < d2[v.second]){
                d2[v.second] = d22;
                q.push(make_pair(d22, v.second));
            }
        }
    }
}

int main() {
    cin >> n >> E;
    for (int i = 0; i < E; ++i) {
        int u, v, c2;
        cin >> u >> v >> c2;
        es[u].push_back(make_pair(c2, v));
    }
    dijkstra();

    cout << d2[n] << endl;

    return 0;
}
*/
