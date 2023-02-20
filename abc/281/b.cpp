#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    string str;
    int n = -1;
    int len;

    cin >> str;
    n = stoi(regex_replace(str, regex("\\D"), ""));
    len = str.length();

    if (len == 8 &&
        (isalpha(str[0]) && isalpha(str[str.size() - 1]) &&
         !(isalpha(str[1]))) &&
        (n >= 100000 && n < 999999)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
