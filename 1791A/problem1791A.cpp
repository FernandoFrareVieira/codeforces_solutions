#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        string word = "codeforces";
        bool flg = false;

        char c;
        cin >> c;

        for(char w : word) {
            if(w == c) {
                flg = true;
                break;
            }
        }

        if(flg) cout << "YES" << endl;
        else cout << "NO" << endl; 
    }

    return 0;
}