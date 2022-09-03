#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

int main()
{
    string s;
    int status[7] = {1, 1, 1, 1, 1, 1, 1};
    int pin[10];

    cin >> s;
    s = stoi(s);

    for (int i = 0; i < 10; i++)
    {
        pin[i] = s[i];
    }

    // ピン1の判定
    if (pin[0] == 1)
    {
        cout << "No" << endl;
        return 0;
    }

    if (pin[6] == 0)
    {
        status[0] = 0;
    }

    cout << "status" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << status[i];
    }

    return 0;
}