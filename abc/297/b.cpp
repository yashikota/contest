#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string s;
    cin >> s;

    if (abs(int(s.find("B") - s.rfind("B") % 2))) {
        if (s.find("R") < s.find("K") && s.rfind("R") > s.find("K")) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
