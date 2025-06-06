#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int previous, current;
    int count = 1;

    cin >> n;

    cin >> previous;
    n--;

    while(n--) {
        cin >> current;
        if(current != previous) count++;
        previous = current;
    }

    cout << count<< endl;

    return 0;
}