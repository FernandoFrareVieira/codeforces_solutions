#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string n;
    ll count = 0;

    cin >> n;

    for(char c : n) {
        if(c == '4' || c == '7') {
            count++;
        }
    }

    if(count == 4 || count == 7) {
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }

    return 0;
}