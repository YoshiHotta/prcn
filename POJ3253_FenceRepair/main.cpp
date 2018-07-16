/*
#include <iostream>
#include <queue>

using namespace std;

int N;
int L[50001];

priority_queue<int> q;

int solve() {
    int sz = 0;
    for (int i = 0; i < N-1; ++i) {
        int m1 = q.top(); q.pop();
        int m2 = q.top(); q.pop();
        q.push(m1 + m2);
        sz += m1 + m2;
    }
    return - sz;
}

int main() {
    cin >>N;
    for (int i = 0; i < N ; ++i) {
        int a;
        cin >> a;
        q.push(-a);
    }


    cout << solve() << endl;
    return 0;
}
*/
