#include <iostream>
using namespace std;
void solve()
{
    string q;
    int l;
    cin >> q;
    l = q.length();
    for (int i = 0; i < l; i++)
    {
        if (q[i] == '.')
        {
            cout << 0;
        }
        else
        {
            if (q[i + 1] == '.')
            {
                cout << 1;
            }
            else
            {
                cout << 2;
            }
            i++;
        }
    }
}
int main()
{
    solve();
}