#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    if(n % 2 == 0) {
        int x = 4;
        cout << x << " " << n - x << endl;
    }else {
        int x = 9;
        cout << x << " " << n - x << endl;
    }   

    return 0;
}