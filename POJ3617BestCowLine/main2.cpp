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
    string S = "ACDBCB";

    int l = 0, r = N - 1;
    for (int i = 0; i < N; ++i) {
        bool left;
        for (int j = 0; l + j < r - j; ++j) {
            if (S[l + j] < S[r - j]) {
                left = true;
                break;
            } else if (S[l + j > S[r-j]]){
                left = false;
                break;
            }
        }
        if(left) {
            cout << S[l] ; l++;
        }else{
            cout << S[r] ; r--;

        }
    }


    return 0;
}
*/
