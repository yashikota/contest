#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    int n;
    int in = 0, out = 0, put = 0;

    cin >> n;

    vector<int> sequence(n);

    for (int i = 0; i < n; i++) {
        cin >> sequence.at(i);
    }

    for (int i = 0; i < n; i++) {
        in = sequence.at(i);
        put = in - out;
        out += put;
        cout << put << " ";
    }

    return 0;
}
