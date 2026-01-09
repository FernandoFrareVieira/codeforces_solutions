#include <bits/stdc++.h>

using namespace std;

int vetor[200005];

int sumDigits(int a) {
    int soma = 0;
    while(a != 0) {
        soma += a % 10;
        a = a / 10;
    }

    return soma;
}

void criarVetor() {
    vetor[0] = 0;
    vetor[1] = 1;

    int soma = 0;

    for(int i = 2; i <= 200000; i++) {
        soma = sumDigits(i);
        vetor[i] = vetor[i-1] + soma;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    criarVetor();

    while(t--) {
        long long n; cin >> n;
        cout << vetor[n] << endl;
    }

    return 0;
}