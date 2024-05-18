#include <bits/stdc++.h>

#define ll long long

int main() {
    int h;
    std::cin >> h;

    int i, cnt = 1;
    for (i = 1; cnt <= h; i++) {
        cnt += std::pow(2, i);
    }
    std::cout << i << std::endl;

    return 0;
}
