#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

void yes(int type);
void no(int type);

int main()
{
    int n, m;
    cin >> n >> m;
    string input;
    int count = 0;

    vector<string> vecN(n);
    vector<string> vecM(m);

    for (int i = 0; i < vecN.size(); i++)
    {
        cin >> input;
        vecN.at(i) = input.substr(input.length() - 3);
    }
    for (int i = 0; i < vecM.size(); i++)
    {
        cin >> vecM.at(i);
    }

    for (int i = 0; i < vecN.size(); i++)
    {
        for (int j = 0; j < vecM.size(); j++)
        {
            if(vecN.at(i) == vecM.at(j)) {
                count++;
                break;
            }
        }
    }

    cout << count << endl;

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
