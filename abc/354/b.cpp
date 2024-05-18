#include <bits/stdc++.h>

#define ll long long

int main() {
    int n;
    std::cin >> n;

    std::vector<std::pair<std::string, int>> sc;
    std::string s;
    int c, total = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> s >> c;
        total += c;
        sc.push_back({s, c});
    }

    std::sort(sc.begin(), sc.end());

    for (int i = 0; i < sc.size(); i++) {
        if (i == total % n) {
            std::cout << sc.at(i).first << std::endl;
        }
    }

    return 0;
}
