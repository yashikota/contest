#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)

void result(int letter, int either);

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> score(n);
    vector<int> ans(n);
    int total = 0;

    rep(i, n) {
        cin >> score.at(i);
    }
    rep(i, m) {
        cin >> ans.at(i);
    }
    rep(i, m) {
        total += score.at(ans.at(i) - 1);
    }

    cout << total << endl;

    return 0;
}

void result(int letter, int either)
{
    string output;

    switch (letter)
    {
    case 1:
        if (either) output = "YES";
        else output = "NO";
        break;
    case 2:
        if (either) output = "Yes";
        else output = "No";
        break;
    case 3:
        if (either) output = "yes";
        else output = "no";
        break;
    }

    cout << output << endl;
}
