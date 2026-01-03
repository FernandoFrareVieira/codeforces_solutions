#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        int n = 10;
        int count = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                char x; cin >> x;

                if(x == 'X') {
                    for(int k = 0; k < 5; k++) {
                        if(k == i || k == j || n - k - 1 == i || n - k - 1 == j) {
                            count += k + 1;
                            break;
                        }
                    }       
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}