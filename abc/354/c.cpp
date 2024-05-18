#include <bits/stdc++.h>

#define ll long long

int main() {
    int n;
    std::cin >> n;

    std::vector<std::pair<std::pair<int, int>, int>> cards;
    int a, b;
    for (int i = 0; i < n; i++) {
        std::cin >> a >> b;
        cards.push_back({{a, b}, i + 1});
    }

    sort(cards.begin(), cards.end());
    for (auto v : cards) {
        std::cout << v.first.first << ", " << v.first.second << " :" << v.second
                  << " " << std::endl;
    }

    std::set<int> result;
    for (int i = 1; i < n; i++) {
        if (cards.at(i - 1).first.second < cards.at(i).first.second) {
            result.insert(cards.at(i - 1).second);
        } else {
            result.insert(cards.at(i).second);
        }
    }

    // for (auto v : result) {
    //     std::cout << v << " ";
    // }
    // std::cout << std::endl;

    return 0;
}
