#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    string s;
    cin >> n >> s;

    vector<char> odd_digits;

    for (char c : s) {
        if ((c - '0') % 2 == 1) {
            odd_digits.push_back(c);
            if (odd_digits.size() == 2) break;
        }
    }

    if (odd_digits.size() < 2) {
        cout << "-1\n";
        return;
    }

    int d1 = odd_digits[0] - '0';
    int d2 = odd_digits[1] - '0';
    if ((d1 + d2) % 2 == 0) {
        cout << odd_digits[0] << odd_digits[1] << '\n';
    } else {
        cout << "-1\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
