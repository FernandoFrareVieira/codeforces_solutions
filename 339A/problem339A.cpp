#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    bool swapped;

    cin >> s;

    int n = s.size();

    if(n > 1) {
        for(int i = 0; i < s.size() - 2; i += 2) {
            swapped = false;

            for(int j = 0; j < s.size() - i - 2; j += 2) {
                if(s[j] > s[j+2]) {
                    char c = s[j];
                    s[j] = s[j+2];
                    s[j+2] = c;
                    swapped = true;
                }
            }

            if(!swapped) break;
        }
    }

    

    cout << s << endl;

    return 0;
}