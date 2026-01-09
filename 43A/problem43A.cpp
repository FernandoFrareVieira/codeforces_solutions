#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    string t1, t2; cin >> t1;

    int p1 = 1, p2 = 0;

    n--;

    while(n--) {
        string s; cin >> s;

        if(s == t1) p1++;
        else {t2 = s; p2++; }
    }   

    string maior = (p1 >= p2) ? t1 : t2;

    cout << maior << endl;
    
    return 0;
}