#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b, c; cin >> n >> a >> b >> c;
    int maximo = 0;

    for(int x = 0; x <= n; x++) {
        for(int y = 0; y <= n; y++) {
            int resto = n - (x*a) - (y*b);

            if(resto < 0) break;

            if(resto % c == 0) {    
                int z = resto / c;
                maximo = max(maximo, x + y + z);
            }
        }
    }

    cout << maximo << endl;

    return 0;
}