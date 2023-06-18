#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    bool cond = true;
    if (n % 3 == 2)
    {
        cond = false;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if ((i) % 3 == 1)
        {
            if (s[i] != s[i + 1])
            {
                cond = false;
                break;
            }
        }
    }
    if (cond)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}