#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        string target = "Timur";
        bool flg = false;

        if(n == 5) {
            sort(target.begin(), target.end());

            do {
                if(s == target) {
                    flg = true;
                    break;
                }
            }while (next_permutation(target.begin(), target.end()));

            if(flg) cout << "YES" << endl;
            else cout << "NO" << endl;

        }else {
            cout << "NO" << endl;
        }
    }

    return 0;
}