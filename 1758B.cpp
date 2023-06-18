#include <iostream>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << 3 << " " << 1 << " ";
        for (int i = 0; i < n - 2; i++)
        {
            cout << 2 << " ";
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << 1 << " ";
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}