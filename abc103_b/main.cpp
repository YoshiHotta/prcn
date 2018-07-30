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
    string s, t;
    cin >> s>>t;

    bool f = false ;
    for (int i = 0; i < s.length(); ++i) {
        string ss = s.substr(i) + s.substr(0,i);
        if(ss == t) {
            f = true; break;
        }
    }
    if(f) cout << "Yes";
    else cout << "No";
    cout << endl;

    return 0;
}
*/
