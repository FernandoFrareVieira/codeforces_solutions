#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b;
    int count = 0, max = -1;

    cin >> n;

    while(n--) {
        cin >> a >> b;

        count += b - a;
        
        if(count > max) max = count;
    }

    cout << max << endl;

    return 0;
}