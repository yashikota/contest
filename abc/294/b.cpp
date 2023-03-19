#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int h, w;
    cin >> h >> w;

    vector<vector<int>> a(h, vector<int>(w));

    rep(i, h) {
        rep(j, w) { cin >> a.at(i).at(j); }
    }

    rep(i, h) {
        rep(j, w) {
            if (a.at(i).at(j) == 0)
                cout << ".";
            else {
                char ch = 'A' + a.at(i).at(j) - 1;
                cout << ch;
            }
        }
        cout << endl;
    }

    return 0;
}
