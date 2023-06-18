#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    long long a[n][n], su = 0, min = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            su += a[i][j];
        }
    }
    a[0][0] = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
            }
        }
    }
    cout << su - min;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}