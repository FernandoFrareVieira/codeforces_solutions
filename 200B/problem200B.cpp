#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    double n, x;
    double sum = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
    }

    
    cout << fixed << setprecision(12) << sum / n << endl;
    return 0;
}