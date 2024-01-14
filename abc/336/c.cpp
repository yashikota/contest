#include <bits/stdc++.h>

#define ll long long

std::vector<std::string> s;

void sub(int n) {
    if (n < 5)
        s.push_back(std::to_string(n));
    else {
        sub(n / 5);
        s.push_back(std::to_string(n % 5));
    }
}

int main() {
    ll n;

    std::cin >> n;
    sub(n);
    std::string s2(s.begin(), s.end());

    // std::cout << stoi(s2) << std::endl;

    return 0;
}
