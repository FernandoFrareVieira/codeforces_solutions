#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    int count = 0;

    cin >> n >> m;

    vector<vector<char>> s(n, vector<char>(m, 0));


    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            s[i][j] = '.';
        }
    }

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            for(int j = 0; j < m; j++) {
                s[i][j] = '#';
            }
        }else {
            if(count % 2 == 0) {
                s[i][m-1] = '#';
            }else {
                s[i][0] = '#';
            }
            
            count++;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << s[i][j];
        }

        cout << endl;
    }


    return 0;
}