#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m; cin >> n >> m;

    long long tempo_total = 0;
    long long passo_atual = 1;

    for(long long i = 0; i < m; i++) {
        long long x; cin >> x;

        if(x >= passo_atual) {
            tempo_total += x - passo_atual;
            passo_atual = x;
        }else {
            tempo_total += (n - passo_atual) + x;
            passo_atual = x;
        }
    }

    cout << tempo_total << endl;

    return 0;
}