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
    stack<int> pd;
    int l = 0;
    vector<int> areas;
    int area = 0;
    string s;
    cin >> s;

    for (int kkk = 0; kkk < s.length(); ++kkk) {
        char dir = s[kkk];
        if (dir == '\\') {
            if (pd.empty()) {
                areas.push_back(area);
                area = 0;
            }
            pd.push(l);
        } else if (dir == '/') {
            if (!pd.empty()) {
                int ll = pd.top();
                pd.pop();
                area += l - ll;
            }
        }
        l++;
    }
    if(area)
    areas.push_back(area);

    int sum = 0;
    for (auto v : areas) {
        sum += v;
    }
    cout << sum << endl;
    cout << areas.size();
    for (int i = 0; i < areas.size(); ++i) {
        cout << " ";
        cout << areas[i];

    }
    cout << endl;


    return 0;
}
*/
