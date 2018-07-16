/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int ncases;

void solve(vector<int> ant, int len) {
    vector<int> mindis, maxdis;
    for (int i = 0; i < ant.size(); ++i) {
        mindis.push_back(min(ant[i], len - ant[i]));
        maxdis.push_back(max(ant[i], len - ant[i]));
    }
    cout<< *max_element(mindis.begin(), mindis.end()) << " " << *max_element(maxdis.begin(), maxdis.end()) << endl;
}
int main() {
    cin >> ncases;
    for (int i = 0; i < ncases; ++i) {
        vector<int> ant;
        int len, dist, nants ;
        cin >> len  >> nants;
        for (int j = 0; j < nants; ++j) {
            cin >> dist;
            ant.push_back(dist);

        }

        solve(ant, len);
    }

    return 0;
}
*/
