#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int lowercase = 0, uppercase = 0;

    cin >> s;

    for(char c : s) {
        if(c >= 'a' && c <= 'z') lowercase++;
        else uppercase++;
    }

    if(lowercase >= uppercase) {
        for(char &c : s) {
            c = tolower(c);
            
        }
    }else {
        for(char &c : s) {
            c = toupper(c);
        }
    }

    cout << s << endl;

    return 0;
}