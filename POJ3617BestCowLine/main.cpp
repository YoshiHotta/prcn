/*
#include <iostream>
#include <list>

using namespace std;

int N;
string s;
list<char> t;

void solve() {
    int l = 0, r = s.length()-1;

    int num = 0;
    while(num < s.length()) {
        if(s[l] < s[r]) {
            t.push_back(s[l++]);
        } else if (s[l] > s[r]) {
            t.push_back(s[r--]);
        } else {
            int ll = l, rr = r;
            while(s[ll] != s[rr] && ll < rr) {
                ll++; rr--;
            }
            if(s[ll] < s[ll]) {
                t.push_back(s[l++]);
            } else{
                t.push_back(s[r--]);
            }
        }
        num++;
    }
}
int main() {
    cin >> N ;
    cin >> s;
    solve();
    for (int i = 0; i < N; ++i) {
        if(i) cout << " ";
        cout << t.front();
        t.pop_front();
    }
    cout << endl;
    return 0;
}
*/
