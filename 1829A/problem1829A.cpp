#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        string s; cin >> s;
        string cf = "codeforces";

        int count = 0;

        for(int i = 0; i < 10; i++) {
            if(s[i] != cf[i]) count++;
        }

        cout << count << endl;
    }

    return 0;
}