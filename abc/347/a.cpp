#include <bits/stdc++.h>

#define ll long long

int main() {
    int n, k, x;

    std::cin >> n >> k;
    for (int i = 0; i < n; i++) {
        std::cin >> x;
        if (x % k == 0) {
            std::cout << x / k << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
