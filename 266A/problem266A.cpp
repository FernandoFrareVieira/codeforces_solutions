#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    int count = 0;

    cin >> n >> s;

    for(int i = 0; i < n - 1; i++) {
        if(s[i] == s[i+1])
            count++;
    }

    cout << count << endl;
    
    return 0;
}