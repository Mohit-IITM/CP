#include <iostream>
using namespace std;
void solve()
{
    string q;
    int n, l = 0;
    cin >> n;
    cin >> q;
    for (int i = 0; i < n - 1; i++)
    {
        if (q[i] == q[i + 1])
        {
            l++;
        }
    }
    cout << l;
}
int main()
{
    solve();
}