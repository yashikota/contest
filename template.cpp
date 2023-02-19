#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)

void result(int letter, int either);

int main()
{
    string str;

    cin >> str;
    cout << str << endl;

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
