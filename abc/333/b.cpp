#include <bits/stdc++.h>

#define ll long long

int main() {
    char s1, s2, t1, t2;
    int s, t;

    std::cin >> s1 >> s2 >> t1 >> t2;

    s = abs(s1 - s2);
    t = abs(t1 - t2);

    if (s == 4) s -= 3;
    else if (s == 3) s -= 1;

    if (t == 4) t -= 3;
    else if (t == 3) t -= 1;

    if (s == t) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
