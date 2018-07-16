/*#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
using namespace std;

struct sw {
    long long x, y, z;
    long long sum ;
};

bool cmp(sw a, sw y) {
    return a.sum > y.sum;
}
int main() {
    int N, M;
    cin >> N >> M;
    vector<sw> sws;

    for (int i = 0; i < N; ++i) {
        long long a, b, c;
        cin >> a >> b >> c ;
        struct sw s = {a,b,c, 0};
        sws.push_back(s);
    }

    int xd[] = {1,-1};
    int yd[] = {1,-1};
    int zd[] = {1,-1};
    long long summax = INT_MIN;
    for (int j = 0; j < 2; ++j) {
        for (int i = 0; i < 2; ++i) {
            for (int k = 0; k < 2; ++k) {
                for (int l = 0; l < N; ++l) {
                    sws[l].sum = sws[l].x * xd[j] +  sws[l].y * yd[i] +  sws[l].z * zd[k];
                }
                sort(sws.begin(), sws.end(), cmp);
                long long sum = 0;
                for (int m = 0; m < M; ++m) {
                    sum += sws[m].sum ;
                }
                summax = max(summax, sum);
            }
        }
    }
    cout << summax << endl;

    return 0;
}*/
