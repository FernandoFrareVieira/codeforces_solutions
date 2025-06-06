#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t, a, b, c, n;
    int s1, s2, s3;
    vector<string> asw;

    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> a >> b >> c >> n;

        s1 = n + b + c - 2*a;
        s2 = n + a + c - 2*b;
        s3 = n + a + b - 2*c;

        if(s1 >= 0 && s2 >= 0 && s3 >= 0) {
            if(s1 % 3 == 0 && s2 % 3 == 0 && s3 % 3 == 0) {
            asw.push_back("YES");
            }else {
                asw.push_back("NO");
            }
        }else {
            asw.push_back("NO");
        }
        
    }

    for(int i = 0; i < t; i++) {
        cout << asw[i] << endl;
    }

    return 0;
}