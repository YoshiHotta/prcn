/*
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int N, E ;
vector<int> es[100000];
int col[100000];
vector<int> prenum, lowerst;
vector<int> ps(100000, 0);
vector<int> cs[100000], bs[100000];
vector<int> finish;

void dfs() {
    int s = 0;
    stack<int> vis;
    vis.push(s);
    col[s] = 'g';
    prenum.push_back(s);

    while(!vis.empty()) {
        int now = vis.top();
        int next = -1;
        for (int i = 0; i < es[now].size(); ++i) {
            int inext = es[now].at(i);
            if(col[inext] == 'w') {
                next = inext;
                break;
            }
        }
        if(next == -1) {
            vis.pop();
            col[now] = 'b';
            finish.push_back(now);
            for (int i = 0; i < es[now].size(); ++i) {
                int l = es[now].at(i);
                if(col[l] == 'g' && l != ps.at(now)) {
                    bs[now].push_back(l);
                }
            }
        } else {
            prenum.push_back(next);
            vis.push(next);
            col[next] = 'g';
            prenum.push_back(next);
            ps.at(next) = now;
            cs[now].push_back(next);
        }
    }
}

void calclowest() {
    for (int i = 0; i < N; ++i) {
        int v  = finish.at(i);
        int minl = prenum.at(v);
        for (int j = 0; j <bs[v].size() ; ++j) {
            int b = bs[v].at(j);
            minl = min(prenum.at(b), minl);
        }
        lowerst.at(v) = minl;
        for (int k = 0; k < cs[v].size(); ++k) {
            int c = cs[v].at(k);
            minl = min(minl, lowerst.at(c));
        }
    }
}

void articulationp() {
    vector<int> ars;
    for (int i = 0; i < N; ++i) {
        int p = ps.at(i);
        if(prenum.at(p) <= lowerst.at(i)) {
            ars.push_back(i);
        }
    }
    sort(ars.begin(), ars.end());
    for (int j = 0; j < ars.size(); ++j) {
        if (j) cout << " ";
        cout << ars.at(j) ;
    }

    cout << endl;

}

int main() {
    cin >> N >> E;
    for (int i = 0; i < E; ++i) {
        int s, t;
        cin >> s >> t;
        es[s].push_back(t);
        es[t].push_back(s);
    }

    for (int j = 0; j < N; ++j) {
        col[j] = 'w';
    }

    dfs();
    calclowest();
    articulationp();
    return 0;
}*/
