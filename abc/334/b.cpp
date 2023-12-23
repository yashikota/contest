#include <bits/stdc++.h>

#define ll long long

int main() {
    ll a, m, l, r;
    std::cin >> a >> m >> l >> r;

    int count = 0;
    int k = 0;

    int len = std::abs(l - r);
    std::cout << len << std::endl;
    // std::cout << std::ceil((double)(len/m)) << std::endl;

    // while (a + k * m > l) {
    //     k--;
    //     count++;
    // }

    // k = 0;
    // std::cout << count << std::endl;

    // while (a + k * m < r) {
    //     k++;
    //     count++;
    // }

    // std::cout << count << std::endl;

    return 0;
}
