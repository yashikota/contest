#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

int main()
{
    int r, c;
    int diff;

    cin >> r >> c;

    diff = 15 - min(r, c);

    if (diff % 2)
    {
        cout << "white";
    }
    else
    {
        cout << "black";
    }

    return 0;
}
