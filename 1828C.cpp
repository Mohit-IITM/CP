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
    int a[n], b[n];
    forn(i, n)
    {
        cin >> a[i];
    }
    forn(i, n)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n);
    int indexa = 0, indexb = 0;
    vector<int> nums(n, -1);
    int num = 0, ans = 1;
    while (indexa < n && indexb < n)
    {
        if (a[indexa] > b[indexb])
        {
            indexb++;
            num++;
        }
        else
        {
            nums[indexa] = num;
            indexa++;
            num = 1;
        }
    }
    forn(i, n)
    {
        if (nums[i] == -1)
        {
            nums[i] = nums[i - 1];
        }
        cout << nums[i] << " ";
        ans = (ans * (nums[i])) % mod;
    }

    cout << endl;
    cout << ans << endl;
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