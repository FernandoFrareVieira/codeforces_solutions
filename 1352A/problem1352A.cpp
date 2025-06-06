#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, x, ans;
    vector<int> v;

    cin >> n;

    for(int i = 0; n > 0; i++) {
        x = n % 10;

        if(x > 0) {
            ans = x * pow(10, i);
            v.push_back(ans);
        }
        n = n / 10;
    }

    cout << v.size() << endl;

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << endl;
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