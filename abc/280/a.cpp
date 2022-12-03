#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

int main()
{
    int h, w;
    string input;

    cin >> h >> w;

    vector<string> grid(h);

    for (int i = 0; i < h; i++)
    {
        cin >> grid.at(i);
    }

    int count = 0;

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if((grid.at(i)[j]) == '#') {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}
