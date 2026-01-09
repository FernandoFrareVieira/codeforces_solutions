#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        vector<int> b(n, 0);
        map<int, int> freq;
        long long pares = 0;

        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            int val = x - i;

            freq[val]++;
        }

        for(const auto& p : freq) {
            long long x = p.second;

            if(x > 1) {
                pares += (x * (x - 1)) / 2;
            }
        }

        cout << pares << endl;
    }

    return 0;
}