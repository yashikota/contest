#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;

    vector<pair<string, long long>> human(n);

    rep(i, n) { cin >> human.at(i).first >> human.at(i).second; }

    long long min = 0;
    rep(i, n) {
        if (i == 0) min = human.at(i).second;
        if (min > human.at(i).second) min = human.at(i).second;
    }

    bool flag = false;
    rep(i, n) {
        if (human.at(i).second == min) flag = true;
        if (flag)
            cout << human.at(i).first << endl;
    }

    rep(i, n) {
        if (human.at(i).second != min) {
            cout << human.at(i).first << endl;
        } else {
            break;
        }
    }

    return 0;
}
