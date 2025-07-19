#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int count = 0, i = 1;
    vector<int> a(1000);

    while(count < 1000) {
        if(i % 3 != 0 && i % 10 != 3) {
            a[count] = i;
            count++;
        }
        i++;
    }

    int t; cin >> t;

    while(t--) {
        int x; cin >> x;

        cout << a[x-1] << endl;
    }

    return 0;
}