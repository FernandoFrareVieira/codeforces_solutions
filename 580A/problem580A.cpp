#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, previous;
    int count = 1, max = count;

    cin >> n;
    cin >> previous;

    for(int i = 1; i < n; i++) {
        cin >> a;
        
        if(a >= previous) count++;        
        else count = 1;

        if(count > max) max = count;

        previous = a;
    }

    cout << max << endl;

    return 0;
}