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
    int x;
    cin >> x;
    int m = 1;
    for (int i = 2; i <x ; ++i) {
        int y = i;
        while(y * i<= x) {
            y *= i;
        }
        if(y != i)
        m = max(m, y);
    }
    cout << m << endl;

    return 0;
}


*/
