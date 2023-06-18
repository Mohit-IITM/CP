#include <bits/stdc++.h>
#include <chrono>
#include <random>
#include <iomanip>
#include <fstream>

using namespace std;

/* ************************************************************************************************************************************ */
typedef long long ll;
typedef long double ld;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define endl "\n"
#define ya cout << "YES" << endl;
#define na cout << "NO" << endl;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define int long long
int mod = 1000000007;

/* ************************************************************************************************************************************* */
/* CODE BEGINS HERE */

void solv()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int mind, mind1;
    forn(i, n)
    {
        cin >> a[i];
        if (a[i] == n)
        {
            mind = i;
        }
        if (a[i] == n - 1)
        {
            mind1 = i;
        }
    }
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (a[0] == n)
    {
        for (int i = mind1; i < n; i++)
        {
            cout << a[i] << " ";
        }
        int stop = -1, count = 0;
        if (mind1 == n - 1)
        {
            if (a[mind1 - 1] < a[0])
            {
                for (int i = 0; i < mind1; i++)
                {
                    cout << a[i] << " ";
                }
                cout << endl;
            }
            else
            {
                for (int i = mind1 - 1; i >= 0; i--)
                {
                    if (a[i] < a[0] and count > 0)
                    {
                        stop = i;
                        break;
                    }
                    else
                    {
                        cout << a[i] << " ";
                        count++;
                    }
                }
                for (int i = 0; i <= stop; i++)
                {
                    cout << a[i] << " ";
                }
                cout << endl;
            }
        }
        else
        {
            for (int i = mind1 - 1; i >= 0; i--)
            {
                if (a[i] < a[0] and count > 0)
                {
                    stop = i;
                    break;
                }
                else
                {
                    cout << a[i] << " ";
                    count++;
                }
            }
            for (int i = 0; i <= stop; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        for (int i = mind; i < n; i++)
        {
            cout << a[i] << " ";
        }
        int stop = -1, count = 0;
        if (mind == n - 1)
        {
            if (a[mind - 1] < a[0])
            {
                for (int i = 0; i < mind; i++)
                {
                    cout << a[i] << " ";
                }
                cout << endl;
            }
            else
            {
                for (int i = mind - 1; i >= 0; i--)
                {
                    if (a[i] < a[0] and count > 0)
                    {
                        stop = i;
                        break;
                    }
                    else
                    {
                        cout << a[i] << " ";
                        count++;
                    }
                }
                for (int i = 0; i <= stop; i++)
                {
                    cout << a[i] << " ";
                }
                cout << endl;
            }
        }
        else
        {
            for (int i = mind - 1; i >= 0; i--)
            {
                if (a[i] < a[0] and count > 0)
                {
                    stop = i;
                    break;
                }
                else
                {
                    cout << a[i] << " ";
                    count++;
                }
            }
            for (int i = 0; i <= stop; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solv();
    }
}