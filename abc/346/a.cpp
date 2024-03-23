#include <bits/stdc++.h>

#define ll long long

int main() {
    int n, a, b;
    std::cin >> n >> a;

    for (int i = 0; i < n - 2; i++) {
        std::cin >> b;
        std::cout << a * b << " ";
        a = b;
    }

    std::cin >> b;
    std::cout << a * b << std::endl;

    return 0;
}
