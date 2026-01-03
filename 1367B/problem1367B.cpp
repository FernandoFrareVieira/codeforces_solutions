#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        vector<int> v(n);

        int numPar = 0, numImpar = 0;

        for(int i = 0; i < n; i++) {
            cin >> v[i];
            if(v[i] % 2 == 0) numPar++;
            else numImpar++;
        }

        if(n % 2 == 0) {
            if(numPar != n / 2 || numImpar != n / 2) {
                cout << -1 << endl;
                continue;
            }
        }else {
            if(numPar != (n + 1) / 2 || numImpar != n / 2) {
                cout << -1 << endl;
                continue;
            }
        }

        int foraDeLugar = 0;
        for(int i = 0; i < n; i++) {
            if(i % 2 == 0) {
                if(v[i] % 2 != 0) foraDeLugar++;
            }else {
                if(v[i] % 2 == 0) foraDeLugar++;
            }
        }

        cout << foraDeLugar / 2 << endl;
    }

    return 0;
}