#include <bits/stdc++.h>

#define ll long long

int main() {
    int n;
    std::cin >> n;

    std::unordered_map<int, int> mp(n);

    int in;
    for (int i = 0; i < n; i++) {
        std::cin >> in;
        mp[i] = in;
    }

    for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
        std::cout << "key = " << itr->first              // キーを表示
                  << ", val = " << itr->second << "\n";  // 値を表示
    }

    int cnt = 0;
    for (int i = 0; i < n / 2; i++) {
        if (i + 1 != mp[i]) {
            cnt++;
            int idx = mp[i];
            std::cout << i+1 << "idx: " << idx << std::endl;
            mp[idx] = mp[i];
            mp[i] = i + 1;

            std::cout << i+1 << " " << mp[idx] << std::endl;
        }
    }

    for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
        std::cout << "key = " << itr->first              // キーを表示
                  << ", val = " << itr->second << "\n";  // 値を表示
    }

    std::cout << cnt << std::endl;

    return 0;
}
