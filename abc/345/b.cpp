#include <bits/stdc++.h>

#define ll long long

int main() {
    ll x, ans;
    std::cin >> x;

    if (x % 10 != 0) {
        if (x < 0) {
            ans = (x / 10);
        } else {
            ans = (x / 10) + 1;
        }
    } else {
        ans = (x / 10);
    }

    std::cout << ans << std::endl;

    return 0;
}
