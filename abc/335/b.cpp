#include <bits/stdc++.h>

#define ll long long

int main() {
    int n;
    int total = 0;

    std::cin >> n;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            for (int k = 0; k <= n; k++) {
                total = i + j + k;
                if (n >= total)
                    std::cout << i << " " << j << " " << k << std::endl;
            }
        }
    }

    return 0;
}
