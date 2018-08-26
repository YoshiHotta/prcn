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
    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; ++i) {
        int b;
        cin >> b;
        a[i] = b;
    }

    sort(a.begin(), a.end(), less<int>() );
    int s, t ;
    s = t  =  0;
    for (int j = 0; j < N; ++j) {
        if(j%2) s += a[j];
        else t += a[j];
    }
    cout << max(s,t) - min(s,t) << endl;


    return 0;
}*/
