#include <bits/stdc++.h>

#define ll long long

int main() {
    std::string s;
    std::cin >> s;

    std::set<std::string> p;
    for (int i = 0; i <= s.size(); i++) {
        for (int j = 1; j <= s.size(); j++) {
            p.insert(s.substr(i, j));
        }
    }

    std::cout << p.size() - 1 << std::endl;

    return 0;
}
