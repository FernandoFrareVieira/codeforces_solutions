#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string guest, host, pile, s;

    cin >> guest >> host >> pile;

    if(guest.size() + host.size() != pile.size()) {cout << "NO" << endl; return 0;}

    s = guest + host;

    sort(s.begin(), s.end());
    sort(pile.begin(), pile.end());

    for(int i = 0; i < s.size(); i++) {
        if(s[i] != pile[i]) {cout << "NO" << endl; return 0;}
    }

    cout << "YES" << endl;

    return 0;
}