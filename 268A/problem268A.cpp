#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, h, a;
    int count = 0;
    vector<int> home, guest;

    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> h >> a;

        home.push_back(h);
        guest.push_back(a);
    }


    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i != j) {
                if(home[i] == guest[j]) count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}