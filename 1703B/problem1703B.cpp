#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        int soma = 0;

        vector<int> freq(26);

        for(char c : s) {
            int x = c - 'A';

            if(freq[x] == 0) soma++;
            soma++;

            freq[x]++;
        }

        cout << soma << endl;

    }

    return 0;
}