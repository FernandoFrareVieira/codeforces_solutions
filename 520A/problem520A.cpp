#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{
    int n;
    int flg = 1;
    string s;
    vector<int> freq(26);

    cin >> n >> s;

    if(n < 26) {
        cout << "NO" << endl;
    }else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        for(int i = 0; i < 26; i++) {
            freq[i] = 0;
        }

        for(int i = 0; i < n; i++) {
            freq[s[i] - 97]++;
        }

        for(int i = 0; i < 26; i++) {
            if(freq[i] == 0) {
                flg = 0;
                break;
            }
        }

        flg ? cout << "YES" : cout << "NO";
    }



    return 0;
}