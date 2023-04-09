#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n, d;
    cin >> n >> d;

    int p, q;
    rep(i, n - 1) {
        if (i == 0) cin >> p;
        cin >> q;
        if (q - p <= d) {
            cout << q << endl;
            return 0;
        }
        p = q;
    }

    cout << -1 << endl;
    return 0;
}
