#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, i;
    bool flg = true;

    cin >> n;

    while(n--) {
        cin >> i;
        if(i == 1) {
            flg = false;
            break;
        }
    }

    if(flg) {
        cout << "EASY" << endl;
    }else {
        cout << "HARD" << endl;
    }

    return 0;
}