#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, p, q;
    int count = 0;

    cin >> n;

    while(n--) {
        cin >> p >> q;
        if(q - p >= 2) count++;
    }

    cout << count << endl;

    return 0;
}