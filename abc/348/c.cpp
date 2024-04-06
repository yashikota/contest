#include <bits/stdc++.h>

#define ll long long

int main() {
    int n;
    std::cin >> n;

    int a, c;
    std::map<int, int> beans;
    for (int i = 0; i < n; i++) {
        std::cin >> a >> c;
        if (beans.count(c) > 0) {
            if (beans.at(c) > a) {
                beans[c] = a;
            }
        } else {
            beans[c] = a;
        }
    }

    auto pr = std::max_element(
        beans.begin(), beans.end(),
        [](const auto &x, const auto &y) { return x.second < y.second; });

    std::cout << beans.at(pr->first) << std::endl;

    return 0;
}
