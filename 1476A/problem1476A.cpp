#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        long long n, k; cin >> n >> k;

        long long x = (n + k - 1) / k;
        long long s = x * k;

        cout << (s + n - 1) / n << endl;
    }

    return 0;
}