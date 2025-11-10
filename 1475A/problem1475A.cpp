#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve()
{
    ll n;
    cin >> n;

    while(n % 2 == 0) {
        n /= 2;
    }

    if(n > 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}