#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int max = -1, max_pos = -1;
    int min = 101, min_pos = -1;
    int count = 0;

    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] > max) {
            max = a[i];
            max_pos = i;
        }
    }


    while(a[0] != max) {
        int temp = a[max_pos];
        a[max_pos] = a[max_pos - 1];
        a[max_pos - 1] = temp; 

        count++;
        max_pos--;
    }

    for(int i = 0; i < n; i++) {
        if(a[i] <= min) {
            min = a[i];
            min_pos = i;
        }
    }

    while(a[n-1] != min) {
        int temp = a[min_pos];
        a[min_pos] = a[min_pos + 1];
        a[min_pos + 1] = temp;

        count++;
        min_pos++;
    }

    cout << count << endl;

    return 0;
}