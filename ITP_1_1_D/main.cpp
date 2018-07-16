/*//
// Created by yoshihito.hotta on 2018/06/10.
//
#include <iostream>
using namespace std;

int main() {
    int i;
    cin >> i;
    int h  = i / 3600;
    int m = (i % 3600) / 60;
    int s = i - 3600 * h - 60 * m;

    cout << h << ":" << m << ":" << s << endl;

    return 0;
}*/
