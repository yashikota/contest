#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int w = 8, h = 8;
    char math = 'a';
    char a;

    rep(i, h) {
        rep(j, w) {
            cin >> a;
            if (a == '*') cout << math << 8-i << endl;
            math = (char)(math + 1);
        }
        math = 'a';
    }

    return 0;
}
