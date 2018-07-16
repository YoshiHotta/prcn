/*
#include <iostream>
#include <queue>
using namespace std;

int N, M;
char mz[102][102];
int dist[102][102];
queue<pair<int, int> > q;

void solve(int is, int iy) {
    q.push(make_pair(is,iy));
    while (!q.empty()){
        is = q.front().first;
        iy = q.front().second;
        q.pop();
        mz[is][iy] = '#';

//       cout << is << " " << iy << " " << dist[is][iy] << endl;
        for (int i = -1; i <=1 ; ++i) {
            for (int j = -1; j <=1 ; ++j) {
                if((mz[is+i][iy+j] == '.' || mz[is+i][iy+j] == 'G' ) && i * j == 0) {
                    dist[is+i][iy+j] = dist[is][iy] + 1;
                    q.push(make_pair(is+i, iy+j));
                    if(mz[is+i][iy+j] == 'G') {
                        cout << dist[is+i][iy+j] << endl;
                        return;
                    }
                }
            }
        }
    }
}

int main() {
    cin >> N >> M ;
    for (int i = 0; i <= N+1; ++i) {
        for (int j = 0; j < M+1; ++j) {
            if(!i || !j || i==N+1 || j==M+1 ) mz[i][j] = '#';
            else {
                char c;
                cin >> c;
                mz[i][j] = c;
            }
        }
    }

    for (int k = 1; k <=N ; ++k) {
        for (int i = 1; i <=M ; ++i) {
            if(mz[k][i] == 'S') {
                solve(k,i);
                break;
            }
        }
    }

    return 0;
}
*/
