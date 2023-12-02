#include <bits/stdc++.h>

#define ll long long

int main() {
    int N, S, M, L;
    int s, m, l;

    std::cin >> N >> S >> M >> L;

    s = ceil(N / 6.0) * S;
    m = ceil(N / 8.0) * M;
    l = ceil(N / 12.0) * L;

    std::cout << std::min({s, m, l}) << std::endl;
}
