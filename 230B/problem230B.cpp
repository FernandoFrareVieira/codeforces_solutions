#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAX = 1e6;
vector<bool> is_prime_v(MAX+1, true);

void calculate_primes()
{
    is_prime_v[0] = false;
    is_prime_v[1] = false;

    for(int i = 0; i*i <= MAX; i++) {
        if(is_prime_v[i]) {
            for(int j = i*i; j <= MAX; j += i) {
                is_prime_v[j] = false;
            }
        }
    }
}

bool is_prime(int x)
{
    if(x <= MAX) return is_prime_v[x];

    return false;
}

bool is_perfect_square(ll x)
{
    ll root = sqrt(x);

    return root*root == x;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, x, root;

    cin >> n;
    
    calculate_primes();

    while(n--) {
        cin >> x;
    
        if(is_perfect_square(x)) {
            root = sqrt(x);

            if(is_prime(root)) {
                cout << "YES" << endl;
            }else {
                cout << "NO" << endl;
            }
        }else {
            cout << "NO" << endl;
        }
    }

    return 0;
}