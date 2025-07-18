#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;

    cin >> a >> b;

    if(a > b) {
        cout << b << " ";
        
        a -= b;
        b = 0;

        cout << a / 2 << endl;
    }else {
        cout << a << " ";

        b -= a;
        a = 0;

        cout << b / 2 << endl;
    }
    
    return 0;
}