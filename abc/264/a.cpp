#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    string str = "atcoder";
    int start, end;

    cin >> start >> end;

    for (int i = start - 1; i <= end - 1; i++) {
        cout << str[i];
    }

    return 0;
}
