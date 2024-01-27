#include <bits/stdc++.h>

#define ll long long

int main() {
    std::string s, s2;
    std::cin >> s;

    std::sort(s.begin(), s.end());

    int max = 0;
    char result;

    for (int i = 0; i < s.size(); i++) {
        if (max < std::count(s.begin(), s.end(), s[i])) {
            max = std::count(s.begin(), s.end(), s[i]);
            result = s[i];
        }
    }

    std::cout << result << std::endl;

    return 0;
}
