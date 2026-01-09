#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long x; cin >> x;

    int sum = 0;

    while(x > 0) {
        if(x & 1) {
            sum++;
        }

        x = x >> 1;
    }

    cout << sum << endl;

    return 0;
}