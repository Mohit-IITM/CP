#include <iostream>
using namespace std;
void solve()
{
    int n, t;
    string q0, q;
    cin >> n >> t;
    cin >> q;
    for (int j = 0; j < t; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (q[i] == 'B' and q[i + 1] == 'G')
            {
                q[i] = 'G';
                q[i + 1] = 'B';
                i++;
            }
        }
    }
    cout << q;
}
int main()
{
    solve();
}