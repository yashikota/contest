#include <bits/stdc++.h>

#define ll long long

int main() {
    ll n;
    std::cin >> n;

    std::string ntom(const std::string origin, const int n, const int m) {
        unsigned ll sum = 0;
        for (int i = 0; i < (ll)origin.size(); i++) {
            int num = origin[i] - '0';
            sum = sum * n + num;
        }

        std::string result = "";
        while (sum > 0) {
            int num = sum % m;
            result = std::to_string(num) + result;
            sum /= m;
        }

        if (result == "") {
            result = "0";
        }

        return result;
    }

    std::cout << (std::stoull(ntom(std::to_string(n - 1), 10, 5)) * 2)
              << std::endl;

    return 0;
}
