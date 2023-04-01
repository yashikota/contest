#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

bool isPrime(long long N) {
    for (long long i = 2; i * i <= N; i++) {
        if (N % i == 0) return false;
    }
    return true;
}

vector<long long> divisor(long long n, long long m) {
    vector<long long> ret;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) ret.push_back(n / i);
        }
    }
    sort(ret.begin(), ret.end());
    return ret;
}

int main() {
    int n, m;
    cin >> n >> m;

    if (n * n <= m) {
        cout << -1 << endl;
        return 0;
    }

    int x = m;
    while (true) {
        if (isPrime(x)) {
            x++;
        } else {
            vector a = divisor(x, m);
            set<int> a2(a.begin(), a.end());
            rep(j, a.size()) {
                if (a.at(j) < m && (x % a.at(j)) < m) {
                    if (a2.count(x % a.at(j))) {
                        cout << x << endl;
                        return 0;
                    }
                }
            }
            x++;
        }
    }

    return 0;
}
