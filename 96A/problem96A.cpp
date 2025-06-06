#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    char digit;
    int count = 1, max_seq = -1;

    cin >> s;

    digit = s[0];

    for(int i = 1; i < s.size(); i++) {
        if(s[i] == digit)
            count++;
        else {
            digit = s[i];
            count = 1;
        } 

        if(count > max_seq) max_seq = count;
    }

    max_seq >= 7 ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}