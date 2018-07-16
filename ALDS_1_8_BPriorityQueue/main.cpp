/*#include <iostream>
#include <algorithm>
using namespace std;

int H ;
int A[500000];

int l(int i) {
    return i * 2;
}

int r(int i) {
    return i * 2 + 1;
}

int p(int i) {
    return i/2;
}

void maxify(int i) {
    int mi = i;
    if (l(i) <= H && A[l(i)] > A[i]) {
        mi = l(i);
    }
    if (r(i) <= H && A[r(i)] > A[mi]) {
        mi = r(i);
    }
    if (mi != i) {
        swap(A[i], A[mi]);
        maxify(mi);
    }
}

int main() {
    cin >> H;
    for (int i = 1; i <= H; ++i) {
        cin >> A[i];
    }

    for (int j = H; j >= 1 ; --j) {
        maxify(j);
    }

    for (int k = 0; k < H; ++k) {
        cout << " " << A[k + 1];

    }
    cout << endl;
    return 0;
}*/
