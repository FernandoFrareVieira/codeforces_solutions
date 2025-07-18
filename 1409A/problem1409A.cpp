#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve()
{
    ll a, b, x, q, temp;
    ll count = 0;

    cin >> a >> b;

    if(a < b) {
        temp = a;
        a = b;
        b = temp;
    }

    if(a != b) {
        while(a != b) {
            x = a - b; 

            if(x >= 10) {
                q = x / 10;

                a -= (10*q);
                count += q;
            }else {
                a -= x;
                count++;
            }
        }
    }

    cout << count << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t; cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}