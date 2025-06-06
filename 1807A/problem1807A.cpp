#include <iostream>
using namespace std;

int main() 
{
    int a, b, c;
    int t; cin >> t;
    
    while(t--) {
        cin >> a >> b >> c;
      
        a + b == c ? cout << "+" << endl : cout << "-" << endl;
    }
    
    return 0;
}