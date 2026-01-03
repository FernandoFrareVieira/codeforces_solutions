#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        string s; cin >> s;
        string ans;

        for(int i = 0; i < s.size(); i++) {
            if(i % 2 == 0) ans.push_back(s[i]);
        }

        ans.push_back(s[s.size() - 1]);

        cout << ans << endl;
    }

    return 0;
}