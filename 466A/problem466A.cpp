#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a, b; cin >> n >> m >> a >> b;

    int sum = 0;

    if(m*a > b) {
        int x = n / m;
        sum += x * b;

        int resto = n - x * m;

        if(resto > 0) {
            sum += min(resto * a, b);
        }
        
    }else {
        sum += n * a;
    }

    cout << sum << endl;

    return 0;
}