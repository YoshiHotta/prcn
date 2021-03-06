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
int N, k;
vector<int> w;

bool enough(int cap) {
    int kk = 1;
    int cc = cap;
    for (int i = 0; i < N; ++i) {
        if(cc >= w[i]){
            cc -= w[i];
        } else {
            if(cap >= w[i])
             cc = cap - w[i];
            else
                return false;
            kk++;
            if(kk > k) return false;
        }
    }
   return true;
}
int main() {
    cin >> N >> k;
    w.resize(N);
    for (int i = 0; i < N; ++i) {
        cin >> w[i];
    }

    int l = 0;
    int r = INT_MAX;
    while(r - l > 1) {
        int m = (l+r)/2;
        if(enough(m)) {
            r = m;
        }  else {
            l = m;
        }
    }
    cout << r << endl;
    return 0;
}
*/
