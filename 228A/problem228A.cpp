#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<ll> s(4);
    ll equals = 0;
    
    for(int i = 0; i < 4; i++) {
        cin >> s[i];
    }

    for(int i = 0; i < 3; i++) {
        for(int j = i+1; j < 4; j++) {
            if(s[i] == s[j]) {
                equals++;
                break;
            }
        }
    }

    cout << equals << endl;

    return 0;
}