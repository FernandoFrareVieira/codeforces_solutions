#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    int a[5][5];

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            int num; cin >> num;

            a[i][j] = num;
            if(num != 0) {
                x = i + 1;
                y = j + 1;
            }
        }
    }

    cout << abs(3 - x) + abs(3 - y);

    return 0;
}