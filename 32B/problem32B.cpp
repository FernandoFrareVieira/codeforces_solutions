#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    string ans = "";
    cin >> s;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '.') 
            ans.insert(ans.end(), '0');
        else {
            if(s[i+1] == '.') 
                ans.insert(ans.end(), '1');
            else 
                ans.insert(ans.end(), '2');

            i++;
        }
    }

    cout << ans << endl;

    return 0;
}