#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int h, w;
    cin >> h >> w;

    vector<vector<char>> room(h, vector<char>(w));
    rep(i, h) {
        rep(j, w) { cin >> room.at(i).at(j); }
    }

    rep(i, h) {
        rep(j, w - 1) {
            if (room.at(i).at(j) == 'T' && room.at(i).at(j + 1) == 'T') {
                room.at(i).at(j) = 'P';
                room.at(i).at(j + 1) = 'C';
            }
        }
    }

    rep(i, h) {
        rep(j, w) { cout << room.at(i).at(j); }
        cout << endl;
    }

    return 0;
}
