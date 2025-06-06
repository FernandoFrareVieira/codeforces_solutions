#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve()
{
    ll a, b, n;
    cin >> a >> b;

    if(a % b != 0) {
        n = (a / b + 1)*b;
        cout << n - a << endl;
        
        return;
    }

    cout << 0 << endl;
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