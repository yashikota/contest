#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)

void result(int letter, int either);

int main()
{
    int n, k;
    cin >> n >> k;

    int max_mex = 0;

    vector<int> a(n);
    rep (i, n) {
        cin >> a.at(i);
    }

    set<int> s(a.begin(), a.end());
    vector<int> a2(s.begin(), s.end());

    for (int i = 0; i < (int)a2.size() -2; i++)
    {
        set<int> s2;
        rep(i, k) {
            s2.insert(a2.at(i));
        }

        int ans = 0;
        while(s2.count(ans) != 0) {
            ans++;
        }
        if (max_mex < ans) max_mex = ans;
    }

    cout << max_mex << endl;

    return 0;
}

void result(int letter, int either)
{
    string output;

    switch (letter)
    {
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
