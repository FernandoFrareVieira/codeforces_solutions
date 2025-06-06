#include <iostream>
#include <set>

using namespace std;

int main()
{
    string s;
    set<char> aux;

    cin >> s;

    for(int i = 0; i < s.length(); i++) {
        aux.insert(s[i]);
    }

    //Caso par
    if(!(aux.size() % 2)) {
        cout << "CHAT WITH HER!" << endl;
    }else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}