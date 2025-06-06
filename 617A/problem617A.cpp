#include <iostream>

using namespace std;

int main()
{
    int x, asw;
    cin >> x;

    asw = !(x % 5) ? x / 5 : x / 5 + 1;

    cout << asw;

    return 0;
}