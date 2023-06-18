#include <iostream>
using namespace std;
void solve()
{
    int n, a, b, c, d;
    cin >> n;
    for (int i = n + 1; i < 9013; i++)
    {
        a = i / 1000;
        b = (i / 100) % 10;
        c = (i / 10) % 10;
        d = i % 10;
        if (a != b and a != c and a != d and b != c and b != d and c != d)
        {
            cout << i;
            break;
        }
    }
}
int main()
{
    solve();
}