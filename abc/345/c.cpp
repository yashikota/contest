#include <bits/stdc++.h>

#define ll long long

int main() {
    std::string s;
    std::cin >> s;

    std::unordered_set<std::string> uniq;

    for (int i = 0; i < s.length(); i++) {
        for (int j = i + 1; j < s.length(); j++) {
            std::string temp = s;
            std::swap(temp[i], temp[j]);
            uniq.insert(temp);
        }
    }

    std::cout << uniq.size() << std::endl;

    return 0;
}
