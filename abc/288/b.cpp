#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

void yes(int type);
void no(int type);

int main()
{
    int n, k;
    cin >> n >> k;

    vector<string> vecN(k);
    string tmp;

    for (int i = 0; i < n; i++)
    {
        if (i < k) cin >> vecN.at(i);
        else cin >> tmp;
    }

    sort(begin(vecN), end(vecN), [](string c1, string c2)
         { return c1 < c2; });

    for (int i = 0; i < k; i++)
    {
        cout << vecN[i] << endl;
    }

    return 0;
}

void yes(int type)
{
    string output;

    switch (type)
    {
    case 1:
        output = "YES";
        break;
    case 2:
        output = "Yes";
        break;
    case 3:
        output = "yes";
        break;
    }

    cout << output << endl;
}

void no(int type)
{
    string output;

    switch (type)
    {
    case 1:
        output = "NO";
        break;
    case 2:
        output = "No";
        break;
    case 3:
        output = "no";
        break;
    }

    cout << output << endl;
}
