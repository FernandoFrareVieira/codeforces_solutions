#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t; cin >> t;

    while(t--) {
        long long x, y, n; cin >> x >> y >> n;

        long long k = (n - y) / x * x + y;

        cout << k << endl;
    }

    return 0;
}