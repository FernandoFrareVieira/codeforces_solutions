#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 100005;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n; cin >> n;
    vector<long long> freq(MAX_N, 0);
    vector<long long> dp(MAX_N, 0);
    for(int i = 0; i < n; i++) {
        long long x; cin >> x;
        freq[x]++;
    }

    dp[0] = 0;
    // Valor de pegar todos os 1s
    dp[1] = freq[1];

    for(int i = 2; i <= 100000; i++) {
        dp[i] = max(dp[i-1], dp[i-2] + (i*freq[i]));
    }

    cout << dp[100000] << endl;

    return 0;
}