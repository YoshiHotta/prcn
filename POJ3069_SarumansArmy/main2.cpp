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
    int N = 6;
    int R = 10;
    int X[6] = {1, 7, 15, 20, 30, 50};

    int i = 0;
    int ans  = 0;
    while(i < N) {
        int s = X[i++];
        while(i < N && X[i] <= s + R) i++;
        int j = i - 1;
        while(i < N && X[i] <= X[j] + R) i++ ;
        ans++;
    }
    cout << ans << endl;

    return 0;
}*/
