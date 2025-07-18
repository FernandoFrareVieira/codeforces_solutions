#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, a, b, c, d;
    int count = 0;

    cin >> t;
    
    while(t--) {
        count = 0;
        cin >> a >> b >> c >> d;

        if(a < b) count++;
        if(a < c) count++;
        if(a < d) count++;

        cout << count << endl;
    }

    return 0;
}   