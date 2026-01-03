#include <bits/stdc++.h>

using namespace std;

bool ehPrimo(int a) {
    for(int i = 2; i < a; i++) {
        if(a % i == 0) return false;
    }

    return true;
}

vector<int> gerarPrimos() {
    vector<int> v;
    for(int i = 2; i < 50; i++) {
        if(ehPrimo(i)) v.push_back(i);
    }

    return v;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;

    vector<int> v = gerarPrimos();

    bool flg = false;

    for(int i = 0; i < v.size(); i++) {
        if(v[i] == n) {
            if(v[i+1] == m) flg = true;
        }
    }

    if(flg) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}