#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        long long twoFactors = 0;
        long long threeFactors = 0;

        while(n % 2 == 0) {
            n = n / 2;
            twoFactors++;
        }

        while(n % 3 == 0) {
            n = n / 3;
            threeFactors++;
        }

        if(n != 1) cout << -1 << endl;
        else {
            if(twoFactors == threeFactors) {
                cout << twoFactors << endl;
            }else if(twoFactors < threeFactors) {
                cout << threeFactors + (threeFactors - twoFactors) << endl;
            }else {
                cout << -1 << endl;
            }
        }

    }

    return 0;
}