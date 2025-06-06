#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
    ll t; cin >> t;

    while(t--) {
        ll n, k;
        cin >> n >> k;

        ll i = 0;

        while(n != 0) {
            if(k == 1) {    
                i += n;
                break;
            }

            // Otimizaçãoo caso n < k
            if(n < k) {
                i += n;
                break;
            }

            if(n % k == 0) {
                n = n / k;
                i++;
            
            // Otimização caso n % k != 0, ecomiza muitas execuções quando n é muito grande e k é muito pequeno, muito melhor do quer fazer else {n --;}
            }else {
                ll r = n % k;
                n -= r;
                i += r;
            }
        }

        cout << i << endl;
    }

    return 0;
}