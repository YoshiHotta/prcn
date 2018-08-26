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
    int h, w;
    int a[52][52];
    cin >> h >> w;
    for (int i = 0; i <= w + 1; ++i) {
        a[0][i] = 1;
        a[h+1][i] = 1;
    }
    for (int i = 0; i <= h + 1; ++i) {
        a[i][0] = 1;
        a[i][w+1] = 1;
    }

    int white = 0;
    for (int j = 1; j <=h ; ++j) {
        for (int i = 1; i <=w ; ++i) {
            char c;
            cin >> c;
            if(c == '.') {
                a[j][i] = 0;
                white++;
            }
            else a[j][i] = 1;
        }
    }

    int dist[52][52];
    for (int k = 0; k <= h + 1; ++k) {
        for (int i = 0; i <= w + 1 ; ++i) {
            dist[k][i] = -1;
        }

    }
    dist[1][1] = 0;

    queue<pair<int, int> > q;
    q.push(make_pair(1,1));
    while(!q.empty()) {
        auto now = q.front(); q.pop();
        int x = get<0>(now);
        int y = get<1>(now);
        int dx[4] = {1,0,-1,0};
        int dy[4] = {0,1,0,-1};
        for (int i = 0; i < 4; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(!a[nx][ny]) {
                q.push(make_pair(nx , ny));
                a[nx][ny] = 1;
                dist[nx][ny] = dist[x][y] + 1;
            }
        }
    }
    int black = w *  h - white;

    if(dist[h][w] == -1) {
        cout << -1 << endl;
        return  0;
    }
    cout << h * w - (dist[h][w] +1) - black << endl;


    return 0;
}
*/
