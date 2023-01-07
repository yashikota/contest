#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

void yes(int type);
void no(int type);

int main()
{
    int t, n, tmp;
    int count = 0;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> tmp;
            if (tmp % 2 != 0)
            {
                count++;
            }
        }
        cout << count << endl;
        count = 0;
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
