#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    vector<int> c;

    rep(i, n) cin >> a.at(i);
    rep(i, m) cin >> b.at(i);

    copy(a.begin(), a.end(), back_inserter(c));
    copy(b.begin(), b.end(), back_inserter(c));
    sort(c.begin(), c.end());

    rep(i, n) { cout << distance(c.begin() ,lower_bound(c.begin(), c.end(), a.at(i))) + 1 << " "; }
    cout << endl;
    rep(i, m) { cout << distance(c.begin(), lower_bound(c.begin(), c.end(), b.at(i))) + 1 << " "; }

    return 0;
}
