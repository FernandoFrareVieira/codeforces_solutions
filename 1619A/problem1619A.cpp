#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        string s; cin >> s;

        int tam = s.size();
        bool flg = true;

        if(tam % 2 == 1) {
            cout << "NO" << endl;
        }else {
            for(int i = 0; i < tam / 2; i++) {
                if(s[i] != s[i+tam/2]) {
                    flg = false;
                }
            }

            if(flg) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }

    return 0;
}