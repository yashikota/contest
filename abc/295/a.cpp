#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;

    vector<string> a(n);
    rep(i, n) cin >> a.at(i);

    int flag = 0;

    rep(i, n) if (a.at(i) == "and" || a.at(i) == "not" || a.at(i) == "that" ||
                  a.at(i) == "the" || a.at(i) == "you") flag++;

    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
