#include <iostream>
#include <string>
using namespace std;
void solve()
{
    long long int n, r = 0;
    string s;
    cin >> n;
    s = to_string(n);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '4' or s[i] == '7')
        {
            r++;
        }
    }
    if (r == 4 or r == 7)
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