#include <bits/stdc++.h>

#define ll long long

int main() {
    ll n;
    int count = 0;

    std::cin >> n;

    std::string s = std::format("{:0>9999b}", n);
    reverse(s.begin(), s.end());

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '0') count++;
        else break;
    }

    std::cout << count << std::endl;

    return 0;
}
