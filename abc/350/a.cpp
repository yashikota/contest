#include <bits/stdc++.h>

#define ll long long

int main() {
    std::string s;
    std::cin >> s;

    if (s.substr(0, 3) == "ABC") {
        int num = stoi(s.substr(3, 3));
        if (num != 316 && num > 0 && num < 350) {
            std::cout << "Yes" << std::endl;
        } else {
            std::cout << "No" << std::endl;
        }
    }

    return 0;
}
