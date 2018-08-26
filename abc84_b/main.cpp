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
    string s;
    int a,b;
    cin>> a>>b;
    cin >> s;
    bool flag = true;
    for (int i = 0; i < a; ++i) {
        if(s[i] == '-') {
            flag = false;
        }
    }
    if(s[a] != '-') flag = false;

    for (int i = a+1; i < a+b+1; ++i) {
        if(s[i] == '-') {
            flag = false;
        }
    }
    if(flag) cout << "Yes";
    else cout << "No";
    cout << endl;
    return 0;
}
*/
