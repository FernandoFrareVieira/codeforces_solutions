#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s, x, y;
    bool flg = true; 

    vector<pair<int, int>> dragons;

    cin >> s >> n;

    for(int i = 0; i < n; i++) {
        cin >> x >> y;

        dragons.push_back(make_pair(x, y));
    }

    sort(dragons.begin(), dragons.end());

    for(int i = 0; i < n; i++) {

        if(s > dragons[i].first) {
            s += dragons[i].second;
        }else {
            flg = false;
            break;
        }
    }

    if(flg) 
        cout << "YES" << endl;
    else   
        cout << "NO" << endl;

    return 0;
}