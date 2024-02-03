#include <bits/stdc++.h>

#define ll long long

int main() {
    std::string s;
    std::cin >> s;

    std::stringstream ss{s};
    std::string buf;
    std::vector<std::string> v;

    while (std::getline(ss, buf, '.')) {
        v.push_back(buf);
    }

    auto l = v.back();
    std::cout << l << std::endl;

    return 0;
}
