#include <bits/stdc++.h>

#define ll long long

int main() {
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> data(n * 2, std::vector<int>(n));

    std::string x;
    for (int i = 0; i < n; i++) {
        std::cin >> x;
        for (int j = 0; j < x.size(); j++) {
            data.at(i).at(j) = x[j];
        }
    }
    for (int i = 0; i < n; i++) {
        std::cin >> x;
        for (int j = 0; j < n; j++) {
            data.at(i + n).at(j) = x[j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (data.at(i).at(j) != data.at(i + n).at(j)) {
                std::cout << i + 1 << " " << j + 1 << std::endl;
            }
        }
    }

    return 0;
}
