#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll k, n, w;
    ll count = 0;

    cin >> k >> n >> w;

    for(int i = 1; i <= w; i++) {
        count += i*k;
    }

    ll ans = count - n;

    if(ans < 0) {
        cout << 0 << endl;
    }else {
        cout << ans << endl;
    }

    return 0;
}