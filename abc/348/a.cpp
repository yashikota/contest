#include <bits/stdc++.h>

#define ll long long

int main() {
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0) {
            std::cout << 'x';
        } else {
            std::cout << 'o';
        }
    }
    std::cout << std::endl;

    return 0;
}
