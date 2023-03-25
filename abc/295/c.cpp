#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    rep(i, n) cin >> a.at(i);

    sort(a.begin(), a.end());

    int count = 0;

    rep(i, n) {
        if (!(i + 1 == n) && a.at(i) == a.at(i + 1)) {
            count++;
            i++;
        }
    }

    cout << count << endl;

    return 0;
}
