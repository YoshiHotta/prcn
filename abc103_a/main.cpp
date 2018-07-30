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
    int a, b,c;
    cin >> a >> b >> c;
    priority_queue<int, vector<int>, greater<int> > q;
    q.push(a);
    q.push(b);
    q.push(c);

    int s= q.top(); q.pop();
    int x = q.top(); q.pop();
    int y = q.top(); q.pop();
    cout << abs(s-x) + abs(y-x) << endl;


    return 0;
}
*/
