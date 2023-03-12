#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    rep(i, n) { cin >> a.at(i); }

    for (int i = 0; i < n; i++) {
        if (a.at(i) != -1 && a.at(i) > i) a.at((a.at(i)) - 1) = -1;
    }

    set<int> a2(a.begin(), a.end());

    vector<int> x;
    for (int i = 1; i <= n; i++) {
        if (!a2.count(i)) x.push_back(i);
    }

    sort(x.begin(), x.end());

    cout << x.size() << endl;
    rep(i, x.size()) { cout << x.at(i) << " "; }

    return 0;
}
