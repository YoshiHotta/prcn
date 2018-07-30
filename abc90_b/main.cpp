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

bool par(int x) {
   string s = to_string(x);
   bool flag = true;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i] != s[s.size() - i - 1]) {
            flag = false;
            break;
        }
    }
    return flag;
}
int main() {
    int a,b;
    cin >> a >> b;
    int cnt = 0;
    for (int i = a; i <=b ; ++i) {
        if(par(i)) cnt++;
    }
    cout << cnt << endl;

    return 0;
}
*/
