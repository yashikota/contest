#include <bits/stdc++.h>

#define ll long long

int main() {
    ll n, a, b;
    std::cin >> n >> a >> b;

    ll x;
    for (ll i = 0; i < n; i++) {
        std::cin >> x;
        if (x > a + b) {
            x %= a + b;
        }
        if (x > a) {
            std::cout << "No" << std::endl;
            return 0;
        }
    }

    std::cout << "Yes" << std::endl;
    return 0;
}
