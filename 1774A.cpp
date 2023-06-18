#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, n1;
    string s, s1 = "";
    cin >> n >> s;
    if (s[0] == '1')
    {
        n1 = 1;
    }
    else
    {
        n1 = 0;
    }
    for (int i = 1; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (n1 % 2 == 0)
            {
                s1 += '+';
            }
            else
            {
                s1 += '-';
            }
            n1 += 1;
        }
        else
        {
            s1 += '+';
        }
    }
    cout << s1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}