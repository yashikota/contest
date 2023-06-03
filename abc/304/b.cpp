#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    ll n;
    cin >> n;

    int len = to_string(n).length() - 1;

    if (len < 3) {
        cout << n;
    } else if (len < 4) {
        cout << n - n % 10;
    } else if (len < 5) {
        cout << n - n % 100;
    } else if (len < 6) {
        cout << n - n % 1000;
    } else if (len < 7) {
        cout << n - n % 10000;
    } else if (len < 8) {
        cout << n - n % 100000;
    } else {
        cout << n - n % 1000000;
    }

    return 0;
}
