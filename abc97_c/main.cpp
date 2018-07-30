/*
#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <string>
#include <map>
using namespace std;

int main() {
    string s; int k ;
    cin >> s >>k;
    priority_queue<string, vector<string>, greater<string> > q;
    for (int i = 0; i < s.length(); ++i) {
        for (int j = i; j < s.length(); ++j) {
            const basic_string<char, char_traits<char>, allocator<char>> &v = s.substr(i, j-i+1);
            q.push(v);
            if(j - i + 1 == k) break;
        }
    }

    string prev = q.top();q.pop();
    int i = 1;
    while(i < k) {
       string ss=  q.top() ; q.pop();
       if(ss != prev) {
           i++;
           prev = ss;
       }
    }
    cout << prev << endl;

    return 0;
}
*/
