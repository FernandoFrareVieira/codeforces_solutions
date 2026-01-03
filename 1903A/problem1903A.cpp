#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        int n, k; cin >> n >> k;

        int primeiro; cin >> primeiro;
        bool ordernado = true;

        for(int i = 1; i < n; i++) {
            int x; cin >> x;
            if(x < primeiro) ordernado = false;
            else primeiro = x;
        }

        if(k < 2) {
            if(ordernado) cout << "YES" << endl;
            else cout << "NO" << endl;
        }else {
            cout << "YES" << endl;
        }
    }

    return 0;
}