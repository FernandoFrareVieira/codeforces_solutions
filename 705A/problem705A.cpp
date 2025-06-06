#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if(n == 1) cout << "I hate it";
    else {
        cout << "I hate that";
        
        for(int i = 2; i < n; i++) {
            if(i % 2 == 0) cout << " I love that";
            else cout << " I hate that";
        }

        if(n % 2 == 0) cout << " I love it";
        else cout << " I hate it";
    }

    return 0;
}