#include <iostream>

using namespace std;

typedef long long ll;

int main() {
    ll n, k, x, asw;
        
    cin >> n >> k;
    
    x  = n/2;
    
    // Caso n Ímpar
    if(n % 2 != 0) {
        x++;
        asw = k <= x ? 2*(k-1) + 1 : 2*(k-x);
    // Caso n par
    }else {
        asw = k <= x ? 2*(k-1) + 1 : 2*(k-x);
    }
    
    cout << asw << endl;
    
    return 0;
}