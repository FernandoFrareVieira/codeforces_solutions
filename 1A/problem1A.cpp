#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    double n, m, a;
    cin >> n >> m >> a;

    ll ans = ceil(n/a) * ceil(m/a);

    cout << ans << endl;

    return 0;
}