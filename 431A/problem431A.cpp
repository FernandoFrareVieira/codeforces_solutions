#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v;
    int soma = 0;

    for(int i = 0; i < 4; i++) {
        int x; cin >> x;
        v.push_back(x);
    }

    string s; cin >> s;

    for(char c : s) {
        int x = c - '0';

        soma += v[x-1];
    }

    cout << soma << endl;

    return 0;
}