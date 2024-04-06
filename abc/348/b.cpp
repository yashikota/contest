#include <bits/stdc++.h>

#define ll long long

int main() {
    int n;
    std::cin >> n;

    std::vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) {
        std::cin >> x.at(i) >> y.at(i);
    }

    float temp, max = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp = sqrt(pow(abs(x.at(i) - x.at(j)), 2.0) +
                        pow(abs(y.at(i) - y.at(j)), 2.0));
            if (max < temp) {
                max = temp;
                cnt = j + 1;
            }
        }
        max = 0;
        std::cout << cnt << std::endl;
    }

    return 0;
}
