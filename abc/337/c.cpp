#include <bits/stdc++.h>

#define ll long long

int main() {
    int n, tmp;
    std::cin >> n;

    std::vector<int> r;

    for (int i = 0; i < n; i++)
    {
        std::cin >> tmp;
        if (tmp == -1) {
            r.insert(r.begin(), i + 1);
        } else {
            
        }
    }

    std::cout << r[0] << std::endl;

    return 0;
}
