#include <bits/stdc++.h>

#define ll long long

int main() {
    int n;
    int a, b;
    int x = 0, y = 0;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> a >> b;
        x += a;
        y += b;
    }

    if (x == y) {
        std::cout << "Draw" << std::endl;
    } else if (x < y) {
        std::cout << "Aoki" << std::endl;
    } else {
        std::cout << "Takahashi" << std::endl;
    }

    return 0;
}
