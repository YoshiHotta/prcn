/*
#include <iostream>
#include <vector>

using namespace std;

int N;
vector<pair<int, int> > r;

void solve() {
    int finish = -1;
    int wk = 0;
    for (int i = 0; i < N; ++i) {
        int s = r[i].first;
        int t = r[i].second;
        if(s <= finish) continue;
        finish = t;
        wk++;
    }
    cout << wk << endl;

}

bool cmp(pair<int, int> x, pair<int, int> y) {
    return x.second < y.second;
}
int main() {
    cin >> N;
    r.resize(N);
    for (int i = 0; i < N; ++i) {
        int a, b;
        cin >> a >> b ;
        r[i] = make_pair(a,b);
    }

    sort(r.begin(), r.end(), cmp);
    solve();


    return 0;
}
*/
