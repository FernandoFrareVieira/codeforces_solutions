#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int count = 0;
    string s, ans;

    cin >> n >> s;

    for(char c : s) {
        if(c != '0') 
            count++;
        else {
            ans.push_back(count + '0');
            count = 0;
        }
    }

    ans.push_back(count + '0');

    cout << ans << endl;

    return 0;
}