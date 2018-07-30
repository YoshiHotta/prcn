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

bool cmp(pair<int, int> x,pair<int, int> y ) {
    return x.second < y.second;
}
int main() {
    int n = 5;
    int s[5] = {1, 2, 4, 6, 8}, t[5] = {3, 5, 7, 9, 10};
    pair<int, int> job[5];
    for (int i = 0; i < n; ++i) {
        job[i].first = s[i];
        job[i].second = t[i];
    }
    sort(job, job + n, cmp);
    int ans=0, tt=0;
    for (int j = 0; j < n; ++j) {
        if(job[j].first > tt) {
            ans ++;
            tt = job[j].second;
        }
    }
    cout << ans << endl;

    return 0;
}
*/
