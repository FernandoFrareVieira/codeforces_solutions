#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        int somaPar = 0;
        int somarImpar = 0;

        if(n % 4 == 0) {
            cout << "YES" << endl;
            for(int i = 2; i <= n; i+=2) {
                cout << i << " ";
                somaPar += i;
            }

            for(int i = 1; i < n - 2; i+=2) {
                cout << i << " ";
                somarImpar += i;
            }

            cout << somaPar - somarImpar << endl;
        }else {
            cout << "NO" << endl;
        }
    }

    return 0;
}