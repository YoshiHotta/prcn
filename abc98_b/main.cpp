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
    int N;
    string S;
    cin >> N >> S;
    int m = INT_MIN;
    for (int i = 0; i < N - 1; ++i) {
        set<char> l,r;
        for (int j = 0; j <=i ; ++j) {
            l.insert(S[j]);
        }
        for (int k = i+1; k < S.length() ; ++k) {
            r.insert(S[k]);
        }
        int cnt = 0;
        for (auto it = l.begin(); it != l.end(); it++) {
            if(r.find(*it) != r.end()) {
                cnt++;
            }
        }
        m = max(m, cnt);
    }
    cout << m << endl;


    return 0;
}
*/
