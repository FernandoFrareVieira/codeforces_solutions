#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;

    for(int i = 0; i < k; i++) {
        if(n % 10 != 0) {
            n--;
        }else {
            n /= 10;
        }
    }

    cout << n << endl;

    return 0;
}