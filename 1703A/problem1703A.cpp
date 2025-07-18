#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    string s;

    cin >> t;

    while(t--) {
        cin >> s;

        for(int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }

        if(s == "yes") cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}   