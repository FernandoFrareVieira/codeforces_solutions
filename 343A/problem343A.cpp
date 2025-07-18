#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b, q, r;
    ll count = 0;

    cin >> a >> b;

    while(b != 0) {
        q = a / b;
        r = a % b;

        a = b;
        b = r;

        count += q;       
    }

    cout << count << endl;

    return 0;
}