#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string s;
    cin >> s;

    for (int i = 1; i <= s.size() / 2; i++) {
        swap(s[(2 * i - 1)-1], s[(2 * i)-1]);
    }

    cout << s << endl;

    return 0;
}
