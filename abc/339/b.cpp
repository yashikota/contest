#include <bits/stdc++.h>

#define ll long long

int main() {
    int h, w, n;
    std::cin >> h >> w >> n;

    std::vector<std::vector<std::string>> data(h, std::vector<std::string>(w, "."));
    std::pair<int, int> cur_pos(0, 0);
    std::string dir = "r";

    for (int i = 0; i < n; i++) {
        if (data.at(cur_pos.first).at(cur_pos.second) == ".") {
            data.at(cur_pos.first).at(cur_pos.second) = "#";
            if (dir == "r") {
                if (cur_pos.second == w - 1) {
                    cur_pos.second = 0;
                } else {
                    cur_pos.second++;
                }
                dir = "d";
            } else if (dir == "d") {
                if (cur_pos.first == h - 1) {
                    cur_pos.first = 0;
                } else {
                    cur_pos.first++;
                }
                dir = "l";
            } else if (dir == "l") {
                if (cur_pos.second == 0) {
                    cur_pos.second = w - 1;
                } else {
                    cur_pos.second--;
                }
                dir = "u";
            } else if (dir == "u") {
                if (cur_pos.first == 0) {
                    cur_pos.first = h - 1;
                } else {
                    cur_pos.first--;
                }
                dir = "r";
            }
        } else {
            std::cout << "dir: " << dir << std::endl;
            data.at(cur_pos.first).at(cur_pos.second) = ".";
            if (dir == "r") {
                if (cur_pos.second == w - 1) {
                    cur_pos.second = 0;
                } else {
                    cur_pos.second++;
                }
                dir = "u";
            } else if (dir == "u") {
                if (cur_pos.first == 0) {
                    cur_pos.first = h - 1;
                } else {
                    cur_pos.first--;
                }
                dir = "d";
            } else if (dir == "l") {
                if (cur_pos.second == 0) {
                    cur_pos.second = w - 1;
                } else {
                    cur_pos.second--;
                }
                dir = "r";
            } else if (dir == "d") {
                if (cur_pos.first == h - 1) {
                    cur_pos.first = 0;
                } else {
                    cur_pos.first++;
                }
                dir = "l";
            }
        }

        std::cout << "next dir: " << dir << ", h: " << cur_pos.first << ", w: " << cur_pos.second << std::endl;

    // }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            std::cout << data.at(i).at(j);
        }
        std::cout << std::endl;
    }

    }

    return 0;
}
