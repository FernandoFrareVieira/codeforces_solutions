#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, t; cin >> n >> t;
    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = 0;
    long long soma = 0;
    int max_livros = 0;

    for(int r = 0; r < n; r++) {
        soma += a[r];

        while(soma > t) {
            soma -= a[l];
            l++;
        } 

        max_livros = max(max_livros, r - l + 1);
    }

    cout << max_livros << endl;

    return 0;
}