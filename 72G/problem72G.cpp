#include <bits/stdc++.h>

using namespace std;

const int MAXN = 25;

int dp[MAXN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    dp[0] = dp[1] = 1;

    for(int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout << dp[n] << endl;

    return 0;
}