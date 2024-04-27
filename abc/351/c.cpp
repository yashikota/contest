#include <bits/stdc++.h>

#define ll long long

int main() {
    int n;
    std::cin >> n;
    std::vector<ll> A(n);
    for (int i = 0; i < n; i++) {
        std::cin >> A[i];
    }

    std::vector<ll> s;
    for (ll a : A) {
        s.push_back(a);
        while (s.size() >= 2 && s.at(s.size() - 1) == s.at(s.size() - 2)) {
            int x = s.back();
            s.pop_back();
            s.pop_back();
            s.push_back(x + 1);
        }
    }

    std::cout << s.size() << std::endl;
    return 0;
}
