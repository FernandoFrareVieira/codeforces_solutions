#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        long long n, k; cin >> n >> k;

        long long ans = k % (n-1) == 0 ? k /(n-1) + k-1 : k / (n-1) + k;

        cout << ans << endl;
    }

    return 0;
}