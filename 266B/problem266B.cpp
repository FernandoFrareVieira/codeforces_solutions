#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    string s;
    char temp;
    
    cin >> n >> t;
    cin >> s;

    while(t--) {
        for(int i = 0; i < n-1; i++) {
            if(s[i] == 'B' && s[i+1] == 'G') {
                temp = s[i];
                s[i] = s[i+1];
                s[i+1] = temp;

                i++;
            }
        }
    }

    cout << s << endl;

    return 0;
}