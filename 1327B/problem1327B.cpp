#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        vector<int> princeTaken(n + 1, 0);
        vector<int> princessTaken(n + 1, 0);
        int count = 0;

        for(int i = 1; i <= n; i++) {
            int k; cin >> k;
            bool find = false;

            for(int j = 0; j < k; j++) {
                int x; cin >> x;
                if(!princeTaken[x] && !find) {
                    princeTaken[x]++;
                    princessTaken[i]++;
                    count++;                    
                    find = true;
                }
            }
        }

        if(count == n) cout << "OPTIMAL" << endl;
            else {
                cout << "IMPROVE" << endl;
                int prince = 0, princess = 0;

                for(int i = 1; i <= n; i++){
                    if(princessTaken[i] == 0) princess = i;
                    if(princeTaken[i] == 0) prince = i;
                }

                cout << princess  << " " << prince << endl;
            }
    }

    return 0;
}