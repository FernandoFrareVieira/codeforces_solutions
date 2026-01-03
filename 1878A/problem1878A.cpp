#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k; cin >> n >> k;

    bool flg = false;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        if(x == k) {
            flg = true;
        }
    }

    if(flg) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main()
{
    int t; cin >> t;

    while(t--) {
        solve();
    }
}