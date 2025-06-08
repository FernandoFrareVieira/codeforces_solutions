#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, pos_odd, pos_even;
    int even = 0, odd = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a;

        if(a % 2 != 0) {
            odd++;
            pos_odd = i + 1;
        }else {
            even++; 
            pos_even = i + 1;
        }
    }

    if(even > odd) {
        cout << pos_odd << endl;
    }else {
        cout << pos_even << endl;
    }

    return 0;
}