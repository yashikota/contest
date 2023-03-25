#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int r, c;
    cin >> r >> c;

    vector<vector<char>> squares(r, vector<char>(c));
    rep(i, r) {
        rep(j, c) { cin >> squares.at(i).at(j); }
    }

    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            if (isdigit(squares.at(i - 1).at(j - 1))) {
                int bomb = squares.at(i - 1).at(j - 1) - '0';
                for (int a = 1; a <= r; a++) {
                    for (int b = 1; b <= c; b++) {
                        if (isdigit(squares.at(a - 1).at(b - 1))) continue;
                        if (abs(i - a) + abs(j - b) <= bomb) {
                            squares.at(a - 1).at(b - 1) = '.';
                        }
                    }
                }
            }
        }
    }

    rep(i, r) {
        rep(j, c) {
            if (isdigit(squares.at(i).at(j))) squares.at(i).at(j) = '.';
        }
    }

    rep(i, r) {
        rep(j, c) { cout << squares.at(i).at(j); }
        cout << endl;
    }

    return 0;
}
