#include <bits/stdc++.h>

#define ll long long

int main() {
    std::string s;
    std::cin >> s;

    std::regex re(R"(<[=]+>)");
    std::cout << (std::regex_match(s, re) ? "Yes" : "No") << std::endl;

    return 0;
}
