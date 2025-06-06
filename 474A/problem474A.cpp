#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
int main()
{   
    char t;
    string n;
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./", asw = "";
    
    cin >> t >> n;
    
    for(char c : n) {
            int pos = s.find(c);
        if(t == 'R') {
            asw.insert(asw.end(), 1, s[pos - 1]);
        }else {
            asw.insert(asw.end(), 1, s[pos + 1]);
        }
    }
    
    cout << asw << endl;
        
    return 0;
}