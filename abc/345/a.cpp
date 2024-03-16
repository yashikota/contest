#include <bits/stdc++.h>

#define ll long long

int main() {
    std::string s;
    std::cin >> s;

    for(int i = 0; i < s.size(); i++) {
        if (i == 0) {
            if (s[i] != '<') break;
        } else if (i == s.size() - 1) {
            if (s[i] != '>') break;
            std::cout << "Yes" << std::endl;
            return 0;
        } else {
            if (s[i] != '=') break;
        }
    }

    std::cout << "No" << std::endl;
    return 0;
}
