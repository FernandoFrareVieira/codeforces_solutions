#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, value;
    int count = 0;

    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        if(x > 0) {
            if(i < k - 1) {
                count++;
            }else if(i == k - 1) {
                value = x;
                count++;
            }else {
                if(x < value) break;
                else count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}