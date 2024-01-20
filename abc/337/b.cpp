#include <bits/stdc++.h>

#define ll long long

int main() {
    std::string s;
    std::cin >> s;

    int a, b, c, ra, rb, rc;
    a = s.find("A");
    b = s.find("B");
    c = s.find("C");
    ra = s.rfind("A");
    rb = s.rfind("B");
    rc = s.rfind("C");

    if ((!(b == -1) && ra > b) || (!(c == -1) && ra > c) ||
        (!(c == -1) && rb > c)) {
        std::cout << "No" << std::endl;
    } else {
        std::cout << "Yes" << std::endl;
    }

    return 0;
}
