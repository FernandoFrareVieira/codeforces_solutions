#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    int sum_l = 0, sum_r = 0;

    cin >> s;

    for(int i = 0; i < 6; i++) {
        if(i < 3) sum_l += s[i] + '0';
        else sum_r += s[i] + '0';
    }

    if(sum_l == sum_r) 
        cout << "YES" << endl;
    else   
        cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}