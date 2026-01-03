#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    int m = 0, c = 0;

    while(n--) {
        int a, b;
        cin >> a >> b;

        if(a != b) {
            if(a > b) {
                m++;
            }else {
                c++;
            }
        }
    }

    if(m == c) cout << "Friendship is magic!^^" << endl;
    else if(m > c) cout << "Mishka" << endl;
    else cout << "Chris" << endl;

    return 0;
}