#include <bits/stdc++.h>

#define ll long long
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    std::cin >> n;

    std::vector<std::pair<int, std::string>> roulette(n);

    rep(i, n) {
        std::cin >> roulette.at(i).first;
        rep(j, roulette.at(i).first) {
            std::string tmp;
            std::cin >> tmp;
            tmp += ",";
            roulette.at(i).second += tmp;
        }
    }

    std::string x;
    std::cin >> x;

    char comma = ',';
    int count = 0;
    int min = INT_MAX;
    std::vector<int> bettor;
    rep(i, n) {
        if (roulette.at(i).second.find(x) != std::string::npos) {
            for (int j = 0; (j = roulette.at(i).second.find(comma, j)) !=
                            std::string::npos;
                 j++) {
                count++;
            }
        }
        if (count != 0 && count < min) {
            bettor.clear();
            bettor.push_back(i + 1);
            min = count;
        } else if (count != 0 && count == min) {
            bettor.push_back(i + 1);
        }
        count = 0;
    }

    std::cout << bettor.size() << "\n";
    for (int i = 0; i < bettor.size(); i++) {
        std::cout << bettor.at(i) << " ";
    }
    std::cout << "\n";

    return 0;
}
