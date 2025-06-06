#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;

    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> x;
        x--;

        v[x] = i + 1;
    }

    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}