#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int count = 0;
    vector<int> v = {100, 20, 10, 5, 1};

    cin >> n;

    for(int i = 0; i < 5; i++) {
        if(n < 5) {
            count += n;
            n = 0;
        }

        if(n >= v[i]) {
            count += n / v[i];
            n = n % v[i];
        }
    }

    cout << count << endl;

    return 0;
}