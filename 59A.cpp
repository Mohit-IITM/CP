#include <iostream>
using namespace std;
void solve()
{
    string a;
    int l, cl = 0, cu = 0;
    cin >> a;
    l = a.length();
    for (int i = 0; i < l; i++)
    {
        if (int(a[i]) < 97)
        {
            cu++;
        }
        else
        {
            cl++;
        }
    }
    if (cu > cl)
    {
        for (int i = 0; i < l; i++)
        {
            a[i] = toupper(a[i]);
        }
    }
    else
    {
        for (int i = 0; i < l; i++)
        {
            a[i] = tolower(a[i]);
        }
    }
    cout << a;
}

int main()
{
    solve();
}