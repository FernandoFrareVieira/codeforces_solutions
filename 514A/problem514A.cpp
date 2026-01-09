#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;

    for(int i = 0; i < s.size(); i++) {
        int digit = s[i] - '0';

        if(digit > 4) {
            // Evitar virar zero a esquerda
            if(i == 0 && digit == 9) continue;

            digit = 9 - digit;

            s[i] = digit + '0';
        }
    }

    cout << s << endl;

    return 0;
}