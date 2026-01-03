#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        string s; cin >> s;

        if( (s[1] == 'a' || s[2] == 'a') && (s[0] == 'b' || s[2] == 'b') && (s[0] == 'c' || s[1] == 'c') ) {
            cout << "NO" << endl;
        }else {
            cout << "YES" << endl;
        }
    }

    return 0;
}