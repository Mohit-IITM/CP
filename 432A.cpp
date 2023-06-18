#include <iostream>
using namespace std;
void solve()
{
    int n, k, res = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x + k <= 5)
        {
            res++;
        }
    }
    cout << res / 3 << endl;
}
int main()
{

    solve();
}