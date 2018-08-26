/*
#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <stack>
#include <cmath>
#include <queue>
#include <set>
#include <map>
using namespace std;


int main() {
    int P;
    cin >> P ;
    vector<int> a(P);
    for (int j = 0; j < P; ++j) {
        cin >> a[j];
    }
    set<int> ss;
    for (int i = 0; i < P; ++i) {
        ss.insert(a[i]);
    }
    int n = ss.size();

    int res = INT_MAX;
    int s, t ;
    s = t =  0;
    map<int , int> cnt;
    int ap = 0;
    while(true) {
       while(ap < n && t < P)  {
           if(cnt[a[t]] == 0) ap++ ;
           cnt[a[t]]++;
           t++;
       }
       if(ap < n) break;
       res = min(res, t - s);
       if(cnt[a[s]] == 1) ap--;
       cnt[a[s]]--;
       s++;
    }

    cout << res << endl;
    return 0;
}
*/
