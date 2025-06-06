#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2, ans;
    cin >> s1 >> s2;

    int n = s1.size();

    for(int i = 0; i < n; i++) {
        if(s1[i] != s2[i]) ans.push_back('1');
        else ans.push_back('0');
    }

    cout << ans << endl;

    return 0;
}