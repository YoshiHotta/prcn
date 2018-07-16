/*
#include <iostream>
#include <vector>

using namespace std;

int N;
vector<int> a(20);

bool zentan(int i, int k) {
    if(i >=N) return false;
    if(k == 0) return true;
    return zentan(i+1, k) || zentan(i + 1, k- a[i]);
}
int main() {
    cin >> N;
    int k;
    cin >> k;
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }
    if(zentan(0, k)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    cout << endl;

    return 0;
}
*/
