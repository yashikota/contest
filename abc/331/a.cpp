#include <bits/stdc++.h>

#define ll long long

int main() {
    int M, D;
    int y, m, d;

    std::cin >> M >> D;
    std::cin >> y >> m >> d;

    if (++d > D) {
        if (++m > M) {
            y++;
            m = 1;
        }
        d = 1;
    }

    std::cout << y << " " << m << " " << d;

    return 0;
}
