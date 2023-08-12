#include <bits/stdc++.h>

#define ll long long
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    std::string pi =
        "3."
        "1415926535897932384626433832795028841971693993751058209749445923078164"
        "062862089986280348253421170679";

    int keta;
    std::cin >> keta;

    std::cout << pi.substr(0, keta + 2);
    if (pi[keta + 2] == '0') {
        std::cout << "0"
                  << "\n";
    } else {
        std::cout << "\n";
    }

    return 0;
}
