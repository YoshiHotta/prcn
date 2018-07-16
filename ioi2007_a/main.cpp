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
    int pay = 1000-N;

    int a[] ={500,100,50,10,5,1};
    int aaa = 0;
    for (int i = 0; i < 6; ++i) {
        int p = pay / a[i];
        aaa += p;
        pay = pay % a[i];
    }
    cout << aaa << endl;

    return 0;
}
*/
