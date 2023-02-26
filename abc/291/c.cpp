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
    int n;
    cin >> n;
    int point = 00;
    vector<int> coordinate(n + 1);
    string s;
    cin >> s;

    coordinate.at(0) = 0;
    rep(i, n) {
        if (s[i] == 'R')
            coordinate.at(i + 1) = point += 10;
        else if (s[i] == 'L')
            coordinate.at(i + 1) = point -= 10;
        else if (s[i] == 'U')
            coordinate.at(i + 1) = point += 1;
        else if (s[i] == 'D')
            coordinate.at(i + 1) = point -= 1;
    }

    sort(coordinate.begin(), coordinate.end());

    if ((int)(set<int>(begin(coordinate), end(coordinate)).size()) == n + 1)
        No;
    else
        Yes;

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
