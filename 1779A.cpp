#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, ou;
    cin >> n;
    string s;
    cin >> s;
    bool cond1 = false, cond2 = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'R' and s[i + 1] == 'L')
        {
            cond1 = true;
        }
        else if (s[i] == 'L' and s[i + 1] == 'R')
        {
            cond2 = true;
            ou = i + 1;
        }
    }
    if (cond1)
        cout << 0 << endl;
    else if (cond2)
        cout << ou << endl;
    else
        cout << -1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}