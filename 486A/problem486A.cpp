#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    ll ans;

    cin >> n;

    ans = n % 2 == 0 ? n / 2 : -1*(n/2 + 1);

    cout << ans << endl;

    return 0;
}