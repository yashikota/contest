#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    long long a, b;
    cin >> a >> b;

    if (a % b == 0) {
        cout << a / b << endl;
    } else {
        cout << (a / b) + 1 << endl;
    }

    return 0;
}
