#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    cin >> n;

    vector<int> x(n);
    vector<int> y(n);

    for(int i = 0; i < n; i++) 
        cin >> x[i] >> y[i];

    if(n == 1) {
        cout << -1 << endl;
    }else {
        
        if(n == 2) {
            if(x[0] != x[1] && y[0] != y[1])
                cout << abs(x[0] - x[1]) * abs(y[0] - y[1]) << endl;
            else
                cout << -1 << endl;
        }else {
            for(int i = 0; i < n-1; i++) {
                for(int j = i; j < n; j++) {
                    if(x[i] != x[j] && y[i] != y[j]) {
                        cout << abs(x[i] - x[j]) * abs(y[i] - y[j]) << endl;
                        return 0;
                    }
                        
                }
            }
        }
    }

   
    return 0;
}