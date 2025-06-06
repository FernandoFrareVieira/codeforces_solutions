#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, fp, lp;
    bool flg = false;

    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> x;
        v[i] = x;
    }

    for(int i = 1; i < n-1; i++) {
        if(v[i] > v[i-1] && v[i] < v[i+1]) {
            fp = i+1;
            for(int j = i+1; j < n-1; j++) {
                if(v[j] <= v[j-1] && v[j] >= v[j+1]) {  
                    lp = j+1;

                    flg = true;
                    break;
                }
            }
        }

        if(!flg) {
            lp = n - 1;
        }
        
        break;
    }

    cout << (lp + fp) / 2 << endl;

    return 0;
}