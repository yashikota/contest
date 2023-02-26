#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

#define YES result(1, 1)
#define Yes result(2, 1)
#define yes result(3, 1)
#define NO result(1, 0)
#define No result(2, 0)
#define no result(3, 0)

#define rep(i, n) for (int i = 0; i < (n); i++)

void result(int letter, int either);

int main() {
    string s;
    cin >> s;

    rep(i, s.size()) {
        if (isupper(s[i])) cout << i + 1 << endl;
    }

    return 0;
}

void result(int letter, int either) {
    string output;

    switch (letter) {
        case 1:
            if (either)
                output = "YES";
            else
                output = "NO";
            break;
        case 2:
            if (either)
                output = "Yes";
            else
                output = "No";
            break;
        case 3:
            if (either)
                output = "yes";
            else
                output = "no";
            break;
    }

    cout << output << endl;
}
