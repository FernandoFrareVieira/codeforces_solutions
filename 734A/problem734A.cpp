#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    int a = 0, d = 0;

    cin >> n >> s;

    for(char c : s) {
        if(c == 'A') a++;
        else d++;
    }

    if(a > d) cout << "Anton" << endl;
    else if(a < d) cout << "Danik" << endl;
    else cout << "Friendship" << endl;

    return 0;
}