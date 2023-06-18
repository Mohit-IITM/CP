#include <iostream>
using namespace std;
void solve()
{
    int el, x, y;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> el;
            if (el == 1)
            {
                x = i + 1;
                y = j + 1;
            }
        }
    }
    if (x >= 3)
    {
        if (y >= 3)
        {
            cout << x + y - 6;
        }
        else
        {
            cout << x - y;
        }
    }
    else
    {
        if (y >= 3)
        {
            cout << y - x;
        }
        else
        {
            cout << 6 - x - y;
        }
    }
}
int main()
{
    solve();
}