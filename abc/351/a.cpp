#include <bits/stdc++.h>

#define ll long long

int main() {
    int x, a = 0;
    for (int i = 0; i < 9; i++) {
        std::cin >> x;
        a += x;
    }

    int b = 0;
    for (int i = 0; i < 8; i++) {
        std::cin >> x;
        b += x;
    }

    std::cout << a - b + 1 << std::endl;

    return 0;
}
