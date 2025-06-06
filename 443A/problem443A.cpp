#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> s(1000);
    int count = 1;
    bool flg = false;

    cin >> s[0];

    for(char c : s[0]) {
        if(c == '}') {
            flg = true;
        }
    }

    while(!flg) {
        cin >> s[count];
        for(char c : s[count]) {
            if(c == '}') {
                flg = true;
                break;
            }
        }

        count++;
    }

    set<char> letters;

    for(int i = 0; i < count; i++) {
        for(char c : s[i]) {
            if(c != '{' && c != '}' && c != ' ' && c != ',') {
                letters.insert(letters.begin(), c);
            }
        }
    }

    cout << letters.size() << endl;
    

    return 0;
}