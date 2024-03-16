#include <bits/stdc++.h>

#define ll long long

int main() {
    ll x, ans;
    std::cin >> x;

    ans = (x / 10);
    if (x % 10 != 0 && x > 0) ans += 1;

    std::cout << ans << std::endl;

    return 0;
}
