#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    rep(i, n) cin >> a.at(i);

    rep(i, n) cout << a.at(i) << endl;

    return 0;
}
