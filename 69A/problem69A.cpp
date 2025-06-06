#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int x, y, z;
    int x_res = 0, y_res = 0, z_res = 0;

    cin >> n;

    while(n--) {
        cin >> x >> y >> z;

        x_res += x;
        y_res += y;
        z_res += z;
    }

    if(x_res == 0 && y_res == 0 && z_res == 0) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}