#include <bits/stdc++.h>

#define ll long long

int main() {
    int n, q;
    std::cin >> n >> q;

    std::vector<int> h(n);

    int in;
    for (int i = 0; i < q; i++) {
        std::cin >> in;
        if (h.at(in - 1)) {
            h.at(in - 1) = 0;
        } else {
            h.at(in - 1) = 1;
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (!h.at(i)) cnt++;
    }
    
    std::cout << cnt << std::endl;

    return 0;
}
