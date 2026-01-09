#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k; cin >> n >> k;
    vector<int> h;
    
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        h.push_back(x);
    }

    long long soma = 0;
    long long min = 0;
    int ans = 0;

    for(int i = 0; i < k; i++) {
        soma += h[i];
    }
    
    min = soma;

    for(int i = 1; i <= n - k; i++) {
        soma += h[i+k-1];
        soma -= h[i-1];

        if(soma < min) {
            min = soma;
            ans = i;
        }  
    }

    cout << ans + 1 << endl;

    return 0;
}