#include <bits/stdc++.h>

#define ll long long

int main() {
    int n, q;
    std::string q1, q2;

    std::cin >> n >> q;

    std::pair<int, int> last;
    std::vector<std::pair<int, int>> pairs;

    for (int i = 0; i < n; i++) {
        pairs.push_back(std::make_pair(i + 1, 0));
    }
    std::reverse(pairs.begin(), pairs.end());

    for (int i = 0; i < q; i++) {
        std::cin >> q1 >> q2;
        if (q1 == "1") {
            last.first = pairs[pairs.size() - 1].first;
            last.second = pairs[pairs.size() - 1].second;

            if (q2 == "U") {
                pairs.push_back(std::make_pair(last.first, last.second + 1));
            } else if (q2 == "D") {
                pairs.push_back(std::make_pair(last.first, last.second - 1));
            } else if (q2 == "L") {
                pairs.push_back(std::make_pair(last.first - 1, last.second));
            } else {
                pairs.push_back(std::make_pair(last.first + 1, last.second));
            }
        } else {
            std::cout << pairs[pairs.size() - stoi(q2)].first << " "
                      << pairs[pairs.size() - stoi(q2)].second << std::endl;
        }
    }

    return 0;
}
