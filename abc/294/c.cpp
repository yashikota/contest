#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int binary_search(int arr[], int arr_len, int x) {
    int l = -1;
    int r = arr_len - 1;
    while (r - l > 1) {
        int mid = l + (r - l) / 2;
        if (x == arr[mid]) {
            return mid;
        } else if (x < arr[mid]) {
            r = mid;
        } else {
            l = mid;
        }
    }
    if (x == arr[r]) return r;
    return -1;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    vector<int> c;

    rep(i, n) cin >> a.at(i);
    rep(i, m) cin >> b.at(i);

    copy(a.begin(), a.end(), back_inserter(c));
    copy(b.begin(), b.end(), back_inserter(c));
    sort(c.begin(), c.end());

    int arr[c.size()];
    copy(c.begin(), c.end(), arr);
    int arr_len = sizeof(arr) / sizeof(arr[0]);

    rep(i, n) { cout << (binary_search(arr, arr_len, a.at(i))) + 1 << " "; }
    cout << endl;
    rep(i, m) { cout << (binary_search(arr, arr_len, b.at(i))) + 1 << " "; }

    return 0;
}
