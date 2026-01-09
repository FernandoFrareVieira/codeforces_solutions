#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    long long l; cin >> l;

    cout << fixed << setprecision(10);

    vector<long long> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    double maximo = v[0];

    for(int i = 1; i < n; i++) {
        double x = (v[i] - v[i-1]) / 2.0;
        maximo = max(maximo, x);
    }

    double x = l - v[n - 1];
    maximo = max(maximo, x);

    cout << maximo << endl;

    return 0;
}