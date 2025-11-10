#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        int a, b; cin >> a >> b;

        int min = 1000;

        for(int i = a; i <= b; i++) {
            int x = (i - a) + (b - i);
            if(x < min) min = x;
        }

        cout << min << endl;
    }

    return 0;
}