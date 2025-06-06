#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, p, q, x;
    set<int> s;

    cin >> n >> p;


    for(int i = 0; i < p; i++) {
        cin >> x;
        s.insert(s.begin(), x);
    }

    cin >> q;

    for(int i = 0; i < q; i++) {
        cin >> x;
        s.insert(s.begin(), x);
    }

    if(n == s.size()) {
        cout << "I become the guy." << endl;
    }else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}