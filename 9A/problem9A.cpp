#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int x, y; cin >> x >> y;

    int n = 6 - max(x, y) + 1;
    int d = 6;

    if(n >= d) {
        cout << "1/1" << endl;
        return 0;
    }else if(n == 0) {
        cout << "0/1" << endl;
        return 0 ;
    }

    int cd = gcd(abs(n), abs(d));

     n /= cd;
     d /= cd;
    
    
    cout << n << "/" << d;


    return 0;
}