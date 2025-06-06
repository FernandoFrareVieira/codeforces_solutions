#include <iostream>

using namespace std;

int main()
{
    int n, k, f, t;
    int max = 0;
    bool flg = false;

    cin >> n >> k;
    
    for(int i = 0; i < n; i++) {
        cin >> f >> t;

        int joy = t > k ? f - (t - k) : f;

        if(!flg) {
            max = joy;
            flg = true;
        }else {
            max = joy > max ? joy : max;
        }
    }

    cout << max << endl;

    return 0;
}