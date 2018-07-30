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
    long long N, x;
    cin >> N;
    priority_queue<long long, vector<long long> , greater<long long> > q;
    for (long long i = 0; i < N; ++i) {
        cin >> x;
        q.push(x);
    }
    long long sum = 0;
    while(q.size() != 1) {
        long long x = q.top(); q.pop();
        long long y = q.top(); q.pop();
        q.push(x+y);
        sum += x + y;
    }
    cout << sum << endl;

    return 0;
}
*/
