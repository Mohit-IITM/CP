#include <iostream>
using namespace std;
void solve()
{
    int n, x, y, z, sx = 0, sy = 0, sz = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> z;
        sx = sx + x;
        sy = sy + y;
        sz = sz + z;
    }
    if (sx == 0 && sy == 0 && sz == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
int main()
{
    solve();
}