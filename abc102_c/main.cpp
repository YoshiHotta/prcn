/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
int main() {
    cin >> N ;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        int a;
        cin >> a;
        A[i] = a- i-1;
    }
    sort(A.begin(), A.end());
    int b = A[N/2];

    long sum = 0;
    for (int j = 0; j < N; ++j) {
        sum += abs(A[j] - b);
    }

    cout << sum << endl;
    return 0;
}*/
