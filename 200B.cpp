#include <iostream>
using namespace std;
void solve()
{
    int n;
    float res = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        float x;
        cin >> x;
        res += x;
    }

    cout << res / n << endl;
}
int main()
{

    solve();
}