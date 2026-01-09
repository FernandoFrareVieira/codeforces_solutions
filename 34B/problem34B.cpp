#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;
    vector<int> a(n, 0);
    int sum = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for(int x : a) {
        if(x < 0 && m > 0) {
            sum += -x;
            m--;
        }
    }
 
    cout << sum << endl;

    return 0;
}