#include <bits/stdc++.h>

#define ll long long

int main() {
    std::string s, w, b;
    std::cin >> w >> b;
    int wb = stoi(w) + stoi(b);

    for (int i = 0; i < 20; i++) {
        s += "wbwbwwbwbwbw";
    }

    std::string sub;
    for (int i = 0; i < 200 - wb; i++) {
        sub = s.substr(i, wb);
        if ((std::count(sub.begin(), sub.end(), 'w') == stoi(w)) &&
            (std::count(sub.begin(), sub.end(), 'b') == stoi(b))) {
            std::cout << "Yes" << std::endl;
            return 0;
        }
    }

    std::cout << "No" << std::endl;
    return 0;
}
