#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int i = 0;

    cin >> s;
    bool flg = true;

    if(s[0] >= 'a' && s[0] <= 'z') i++;

    while(i < s.size()) {
        if(s[i] < 'A' || s[i] > 'Z') {
            flg = false;
            break;
        }

        i++;
    }

    i = 0;

    if(flg != 0) {
        if(s[0] >= 'a' && s[0] <= 'z') {
            s[0] = s[0] - 32;
            i++;
        }

        while(i < s.size()) {
            s[i] = s[i] + 32;

            i++;
        }
    }

    cout << s << endl;

    return 0;
}