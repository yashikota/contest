#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    rep(i, n) cin >> a.at(i);
    set<int> a2(a.begin(), a.end());

    rep(i, n) {
        if (a2.count(a.at(i) - x)) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
