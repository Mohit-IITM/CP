#include <iostream>
using namespace std;
void solve()
{
    string x, y, z, res = "YES";
    cin >> x >> y >> z;
    x = x + y;
    int n = x.size();
    int m = z.size();
    if (n != m)
    {
        res = "NO";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (x[i] == z[j])
                {
                    z[j] = '0';
                    break;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (z[i] != '0')
            {
                res = "NO";
                break;
            }
        }
    }
    cout << res << endl;
}
int main()
{
    solve();
}