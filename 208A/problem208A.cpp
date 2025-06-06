#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    bool find_word = false;

    cin >> s;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            if(find_word) cout << " ";
            i+=2;
        }else {
            if(!find_word) find_word = true;
            cout << s[i];
        }
    }
    cout << endl;

    return 0;
}