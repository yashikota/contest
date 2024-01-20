#include <bits/stdc++.h>

#define ll long long

int main() {
    int n;
    std::cin >> n;

    std::vector<int> r(n), s(n);

    for (int i = 0; i < n; i++) {
        std::cin >> r[i];
    }
    s = r;

    std::sort(s.begin(), s.end());
    int t = 0;
    for (int i = 0; i < n; i++) {
        if (!(i + 1 == s[i])) t = i + 1;
    }

    s.clear();
    s.push_back(t);
    for (int i = 1; i < n; i++) {
        t = r[t - 1];
        s.push_back(t);
    }

    std::reverse(s.begin(), s.end());
    for (int i = 0; i < n; i++) {
        std::cout << s[i] << " ";
    }

    return 0;
}
