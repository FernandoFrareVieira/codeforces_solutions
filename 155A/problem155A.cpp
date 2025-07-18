#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, max, min;
    int count = 0;

    cin >> n;

    cin >> x;
    max = x;
    min = x;

    for(int i = 1; i < n; i++) {
        cin >> x;

        if(x > max) {
            max = x;
            count++;
        }

        if(x < min) {
            min = x;
            count++;
        }
    }

    cout << count << endl;

    return 0;
}