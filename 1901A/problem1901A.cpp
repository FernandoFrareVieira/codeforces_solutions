#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        int n, x; cin >> n >> x;

        vector<int> v(n);

        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }   

        int maiorDist = v[0];

        for(int i = 0; i < n-1; i++) {
            maiorDist = max(maiorDist, v[i+1] - v[i]);
        }

        maiorDist = max(maiorDist, 2*(x - v[n-1]));

        cout << maiorDist << endl;
    }

    return 0;
}