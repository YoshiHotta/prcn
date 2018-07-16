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
    int N;
    cin >> N;
    int a = N;
    int S = 0;
    while(a != 0) {
            int b = a % 10;
            a = (a-b)/ 10;
            S += b;
    }
    if(N % S == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
*/
