#include <bits/stdc++.h>
#include <vector>

using namespace std;

int has_distinct_digits(int y)
{   
    int n = 10;
    vector<int> freq(n);

    for(int i = 0; i < n; i++) {
        freq[i] = 0;
    }

    while(y != 0) {
        freq[y%10]++;
        y /= 10;
    }

    for(int i = 0; i < n; i++) {
        if(freq[i] > 1)
            return 0;
    }

    return 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int y;

    cin >> y;

    while(true) {
        y++;
        if(has_distinct_digits(y))
            break;
    } 

    cout << y << endl;

    return 0;
}