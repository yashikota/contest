#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

int main()
{
    string s;
    string dow[5] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    cin >> s;

    for (int i = 0; i < 5; i++)
    {
        if (dow[i] == s)
        {
            cout << 5 - i;
        }
    }

    return 0;
}
