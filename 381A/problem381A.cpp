#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, l, r;
    int count = 0, sum_s = 0, sum_d = 0;

    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    l = 0, r = n - 1;

    while(l <= r) {
        if(count % 2 == 0) {
            if(v[l] > v[r]) {
                sum_s += v[l];

                l++;
            }else {
                sum_s += v[r];
                r--;
            }
        }else {
            if(v[l] > v[r]) {
                sum_d += v[l];

                l++;
            }else {
                sum_d += v[r];
                r--;
            }
        }

        count ++;
    }

    cout << sum_s << " " << sum_d << endl;
 
    return 0;
}