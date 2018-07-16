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

int N;
vector<int> w;
vector<char> col;
int main() {
    cin >> N;
    w.resize(N);

    for (int i = 0; i < N; ++i) {
        cin >> w[i];
        col[i] = 'w';
    }
    vector<int> ww;
    copy(w.begin(), w.end(), ww.begin());

    while(true) {
        auto m = min_element(w.begin(), w.end());
        while(true) {
            int mini = distance(w.begin(), m);
            int tgt = ww[mini];
            auto d = find(w.begin(), w.end(), tgt);
            int tgti = distance(w.begin(), w.end(), d);
            m = d;
            col[tgti] = 'b';
        }
    }

    return 0;
}
*/
