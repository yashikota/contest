#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

int main() {
    int x;
    int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0,
        eight = 0, nine = 0, ten = 0, eleven = 0, twelve = 0, thirteen = 0;

    for (int i = 0; i < 5; i++) {
        cin >> x;

        switch (x) {
            case 1:
                one++;
                break;
            case 2:
                two++;
                break;
            case 3:
                three++;
                break;
            case 4:
                four++;
                break;
            case 5:
                five++;
                break;
            case 6:
                six++;
                break;
            case 7:
                seven++;
                break;
            case 8:
                eight++;
                break;
            case 9:
                nine++;
                break;
            case 10:
                ten++;
                break;
            case 11:
                eleven++;
                break;
            case 12:
                twelve++;
                break;
            case 13:
                thirteen++;
        }
    }

    // printf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d ", one, two, three, four,
    // five, six, seven, eight, nine, ten, eleven, twelve, thirteen);

    if ((one == 3 || two == 3 || three == 3 || four == 3 || five == 3 ||
         six == 3 || seven == 3 || eight == 3 || nine == 3 || ten == 3 ||
         eleven == 3 || twelve == 3 || thirteen == 3) &&
        (one == 2 || two == 2 || three == 2 || four == 2 || five == 2 ||
         six == 2 || seven == 2 || eight == 2 || nine == 2 || ten == 2 ||
         eleven == 2 || twelve == 2 || thirteen == 2)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
