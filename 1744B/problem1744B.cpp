#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n, q;
    ll total_sum = 0, even = 0, odd = 0;

    cin >> n >> q;

    vector<ll> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        total_sum += a[i];

        a[i] % 2 == 0 ? even++ : odd++;
    }

    for(int i = 0; i < q; i++) {
        ll type, x;
        cin >> type >> x;

        if(type == 1) {
            total_sum += odd * x;

            if(x % 2 != 0) {
                even += odd;
                odd = 0;
            }
        }else {
            total_sum += even * x;

            if(x % 2 != 0) {
                odd += even;
                even = 0;
            }
        }

        cout << total_sum << endl;
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}