#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, x;
    cin >> n;

    int count = 0, asw = 0;

    for(int i = 0; i < n; i++) {
        count = 0;

        for(int i = 0; i < 3; i++) {    
           cin >> x;
           count += x; 
        }

        if(count > 1) {
            asw++;
        }
    }

    cout << asw << endl;

    return 0;
}