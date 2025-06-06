#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;    
    int n;
    bool flg = true;

    cin >> s >> t;

    n = s.size();

    if(n == t.size()) {
        for(int i = 0; i < n; i++) {
            if(s[i] != t[n - i -1]) {
                flg = false;
                break;
            }
        }
    }else {
        flg = false;
    }

    if(flg) cout << "YES" << endl;
    else cout << "NO" << endl; 

    return 0;
}