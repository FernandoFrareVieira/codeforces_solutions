#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;

    if(n == 0) {
        cout << 0 << endl;
    }else {
        bool flg = true;
        while(flg) {
            if( (s[0] == '0' && s[s.length() - 1] == '1') || (s[0] == '1' && s[s.length() - 1] == '0')) {
                s.erase(0, 1);
                s.erase(s.length() - 1, 1);
            }else {
                flg = false;
            }
        }

        cout << s.length() << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}