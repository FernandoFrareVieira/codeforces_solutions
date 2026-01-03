#include <bits/stdc++.h>

using namespace std;

long long binarysearch(const vector<long long> &v, long long target) {
    long long l = 0;
    long long r = v.size() - 1;
    long long ans = -1;

    while(l <= r) {
        int m = l + (r - l) / 2;

        if(v[m] <= target) {
            ans = m;
            l = m + 1;
        }else {
            r = m - 1;
        }
    }   

    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n; cin >> n;
    vector<long long> v(n);

    for(long long i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    long long q; cin >> q;

    for(long long i = 0; i < q; i++) {
        long long target; cin >> target;
        long long pos = binarysearch(v, target);

        cout << pos + 1 << "\n";
    }

    return 0;
}