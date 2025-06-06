#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, l, r;
    int count = 0;

    cin >> n >> m;

    vector<int> asw(m);

    for(int i = 0; i < m; i++) {
        asw[i] = 0;
    }

    for(int i = 0; i < n; i++) {
        cin >> l >> r;

        for(int i = l - 1; i <= r - 1; i++) {
            asw[i] = 1;
        }
    }

    for(int i = 0; i < m; i++) {
        if(asw[i] == 0) {
            count++;
        }
    }

    cout << count << endl;

    for(int i = 0; i < m; i++) {
        if(asw[i] == 0) {
            cout << i + 1 << " ";
        }
    }

    return 0;
}