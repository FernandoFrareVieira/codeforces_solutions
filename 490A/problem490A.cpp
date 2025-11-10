#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> p;
    vector<int> m;
    vector<int> a;


    for(int i = 0; i < n; i++) {
        int t; cin >> t;
        if(t == 1) p.push_back(i + 1);
        else if(t == 2) m.push_back(i + 1);
        else a.push_back(i + 1);
    }

    int w = min(min(p.size(), m.size()), a.size());
    
    cout << w << endl;

    for(int i = 0; i < w; i++) {
        cout << p[i] << " " << m[i] << " " << a[i] << endl;
    }

    return 0;
}