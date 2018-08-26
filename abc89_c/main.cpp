/*
#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <stack>
#include <cmath>
#include <queue>
#include <set>
#include <map>
using namespace std;

int main() {
    long long n;
    cin >> n;
    map<char, long long> m;
    for (long long i = 0; i < n; ++i) {
        string s;
        cin >> s;
        m[s[0]]++;
    }
    string march = "MARCH";
    long long sum = 0;
    for (long long mm = 0; mm < 2; ++mm) {
        for (long long a = 0; a <2 ; ++a) {
            for (long long r = 0; r < 2; ++r) {
                for (long long c = 0; c <2 ; ++c) {
                    for (long long h = 0; h <2 ; ++h) {
                        if(mm + a + r + c + h == 3) {
                            long long xx[5] = {m['M'] * mm, m['A'] * a,
                                          m['R'] * r,
                                          m['C'] * c,
                                          m['H'] * h};
                            sort(xx, xx+5);
                            long long hoge = xx[4] * xx[3] * xx[2];
                            sum += hoge;
                        }

                    }

                }

            }

        }
    }

    cout << sum << endl;

    return 0;
}
*/
