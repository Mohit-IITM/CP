#include <iostream>
using namespace std;
void solve()
{
    long long n, sa = 0, sb = 0, mb = 0, temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        sa = sa + temp;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp > mb)

        {
            mb = temp;
        }
        sb = sb + temp;
    }
    cout << sa + sb - mb << "\n";
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