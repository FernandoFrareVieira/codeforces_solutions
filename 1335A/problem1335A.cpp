#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    double n;
    ll ans;

    cin >> n;

    ans = ceil(n/2 - 1);

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}