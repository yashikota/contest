#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int h, w;
    cin >> h >> w;

    vector<vector<char>> m(h, vector<char>(w));
    rep(i, h) {
        rep(j, w) { cin >> m.at(i).at(j); }
    }

    vector<pair<int, int>> s;
    vector<pair<int, int>> n;
    vector<pair<int, int>> u;
    vector<pair<int, int>> k;
    vector<pair<int, int>> e;
    vector<pair<int, int>> snuke;

    rep(i, h) {
        rep(j, w) {
            if (m.at(i).at(j) == 's') {
                s.push_back(pair(i + 1, j + 1));
                snuke.push_back(pair(i + 1, j + 1));
            } else if (m.at(i).at(j) == 'n') {
                n.push_back(pair(i + 1, j + 1));
                snuke.push_back(pair(i + 1, j + 1));
            } else if (m.at(i).at(j) == 'u') {
                u.push_back(pair(i + 1, j + 1));
                snuke.push_back(pair(i + 1, j + 1));
            } else if (m.at(i).at(j) == 'k') {
                k.push_back(pair(i + 1, j + 1));
                snuke.push_back(pair(i + 1, j + 1));
            } else if (m.at(i).at(j) == 'e') {
                e.push_back(pair(i + 1, j + 1));
                snuke.push_back(pair(i + 1, j + 1));
            }
        }
    }

    sort(snuke.begin(), snuke.end());
    for (auto i : snuke) {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}
