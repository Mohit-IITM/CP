#include <iostream>
using namespace std;
void solve()
{
    int n, ind, m, l[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    cin >> n >> m;
    for (int i = 0; i < 15; i++)
    {
        if (n == l[i])
        {
            ind = i;
        }
    }
    if (l[ind + 1] == m)
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