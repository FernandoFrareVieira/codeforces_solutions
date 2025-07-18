#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, l, c, d, p, nl, np;
    int count = 0;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_liters = k*l;
    int total_pieces = c*d;

    cout << min(min(total_liters/(nl*n), total_pieces/n), p/(np*n));

    return 0;
}