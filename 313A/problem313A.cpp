#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string n; cin >> n;
    string temp = n;
    long long maximo = stoll(n);
    long long aux = 0;

    temp.pop_back();
    aux = stoll(temp);

    maximo = max(maximo, aux);

    temp = n;
    temp.erase(temp.size() - 2, 1);
    aux = stoll(temp);

    maximo = max(maximo, aux);

    cout << maximo << endl;

    return 0;
}