#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;

    char a, b = 'A';
    rep(i, n) {
        cin >> a;
        if (a == b) {
            cout << "No" << endl;
            return 0;
        }
        b = a;
    }
    cout << "Yes" << endl;

    return 0;
}
