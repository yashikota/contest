#include <bits/stdc++.h>

#define ll long long

int main() {
    ll n, k;
    std::cin >> n >> k;
    ll sum = k * (k + 1) / 2;

    ll a, total = 0;
    std::set<ll> s;
    for (ll i = 0; i < n; i++) {
        std::cin >> a;
        if (a <= k && !s.count(a)) {
            total += a;
        }
        s.insert(a);
    }
    std::cout << sum - total << std::endl;

    return 0;
}
