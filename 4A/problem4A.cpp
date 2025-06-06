#include <iostream>

using namespace std;

int main()
{
    int w;
    string asw;
    cin >> w;

    asw = !(w%2) && w != 2 ? "YES" : "NO";
    cout << asw;


    return 0;
}