#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;

    cin >> n;
    vector<int> a(n);
    
    for(int i = 0; i < n; i++)
        cin >> a[i];


    if (a[0] != a[1] && a[0] != a[2]) {
        cout << 1 << endl;
        return;
    }
    
    if (a[1] != a[0] && a[1] != a[2]) {
        cout << 2 << endl;
        return;
    }

    for (int i = 2; i < n; ++i) {
        if (a[i] != a[0]) {
            cout << i + 1 << endl;
            return;
        }
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