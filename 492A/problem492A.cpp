#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    int soma = 0;
    int count = 1;
    int altura = 0;

    while(true) {
        int custo = ( count * (count + 1) ) / 2;

        if(soma + custo <= n) {
            soma += custo;
            count++;
            altura++;
        }else {
            break;
        }
    }

    cout << altura << endl;

    return 0;
}