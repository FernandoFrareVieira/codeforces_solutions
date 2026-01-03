#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        string s; cin >> s;

        int ans =  (s[0] - '0' - 1) * 10;

        for(int i = 0; i < s.size(); i++) {
            ans += i+1;
        }

        cout << ans << endl;
    }

    return 0;
}