#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k; cin >> n >> k;
    int soma = 0;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        if(5 - x >= k) soma++;
    }

    cout << soma / 3 << endl;

    return 0;
}