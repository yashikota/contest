#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

void yes(int type);
void no(int type);

int main()
{
    string str;

    cin >> str;
    cout << str << endl;

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
