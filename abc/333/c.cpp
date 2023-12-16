#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long

int main() {
    int n;

    std::cin >> n;

    std::vector<std::string> numbers = {"1", "1", "1"};
    std::vector<ull> repunits = {};

    for (int i = 0; i < 333; i++) {
        int index = i % 3;
        repunits.push_back(std::stoull(numbers[0]) + std::stoull(numbers[1]) +
                           std::stoull(numbers[2]));
        std::cout << i << std::endl;
        std::cout << numbers[0] << ", " << numbers[1] << ", " << numbers[2]
                  << std::endl;
        numbers[index] += "1";
    }

    std::cout << repunits[n] << std::endl;

    return 0;
}
