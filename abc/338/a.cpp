#include <bits/stdc++.h>

#define ll long long

int main() {
    std::string s;
    std::cin >> s;

    std::regex re("[A-Z][a-z]*");
    std::smatch m;

    if (std::regex_match(s, m, re)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
