#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

void yes(int type);
void no(int type);

int main()
{
    int count;
    string input;
    int For = 0, Against = 0;

    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cin >> input;
        if(input == "For") For++;
        if(input == "Against") Against++;
    }

    if ((double)For / (double)count > 0.5) yes(2);
    else no(2);

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
