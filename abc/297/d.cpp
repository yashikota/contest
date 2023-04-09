#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    long long a, b;
    cin >> a >> b;

    int count = 0;
    while (a != b) {
        if (a > b) {
            a = a - b;
            count++;
        }
        if (a < b) {
            b = b - a;
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
