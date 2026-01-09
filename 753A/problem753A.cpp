#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int count = 0;
    vector<int> v;

    for(int i = 1; i <= n; i++) {
        if(n - i >= 0) {
            count++;
            n = n - i;

            v.push_back(i);
        }else {
            break;
        }
    }

    v[v.size()-1] += n;

    cout << count << endl;

    for(int x : v) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}