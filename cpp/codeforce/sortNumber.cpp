// https://codeforces.com/group/MWSDmqGsZm/contest/219158
#include <iostream>
#include <utility>

using namespace std;

int main()
{
    int a = 4, b = 3, c = -1;
    // cin >> a >> b >> c;

    if (a > b)
    {
        swap(a, b);
    }

    if (b > c)
    {
        swap(b, c);
        if (a > b)
        {
            swap(a, b);
        }
    }

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}