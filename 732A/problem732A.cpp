#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, r, temp;
    int count = 0;
    bool flg = false;

    cin >> k >> r;

    temp = k;

    while(!flg) {
        if(k % 10 == 0 || (k % 10) - r == 0) flg = true;
        count++;
        k += temp; 
    }

    cout << count << endl;

    return 0;
}