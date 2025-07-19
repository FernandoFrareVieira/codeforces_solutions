#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];        
    }

    if(n == 1) {
        cout << "YES" << endl;
        return;
    }

    sort(a.begin(), a.end());

    for(int i = 0; i < n - 1; i++) {
        if( abs(a[i] - a[i+1]) > 1) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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