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
    vector<int> www, nnn, iii, wnn, wii, iww, inn, nii, nww;
    forn(i, n)
    {
        string s;
        cin >> s;
        int a[3];
        forn(j, 3)
        {
            a[j] = 0;
        }
        forn(k, s.size())
        {
            if (s[k] == 'w')
            {
                a[0]++;
            }
            else if (s[k] == 'i')
            {
                a[1]++;
            }
            else
            {
                a[2]++;
            }
        }
        if (a[0] == 3)
        {
            www.push_back(i);
        }
        else if (a[1] == 3)
        {
            iii.push_back(i);
        }
        else if (a[2] == 3)
        {
            nnn.push_back(i);
        }
        else if (a[0] == 1 && a[1] == 2)
        {
            wii.push_back(i);
        }
        else if (a[0] == 1 && a[2] == 2)
        {
            wnn.push_back(i);
        }
        else if (a[1] == 1 && a[0] == 2)
        {
            iww.push_back(i);
        }
        else if (a[1] == 1 && a[2] == 2)
        {
            inn.push_back(i);
        }
        else if (a[2] == 1 && a[0] == 2)
        {
            nww.push_back(i);
        }
        else if (a[2] == 1 && a[1] == 2)
        {
            nii.push_back(i);
        }
    }
    int ans = 0;
    vector<int> v = {sz(www), sz(nnn), sz(iii), sz(wnn), sz(wii), sz(iww), sz(inn), sz(nii), sz(nww)}, v1 = {sz(www), sz(nnn), sz(iii), sz(wnn), sz(wii), sz(iww), sz(inn), sz(nii), sz(nww)};
    int mi3 = min(v[0], min(v[1], v[2]));
    ans += 3 * mi3;
    int temp = mi3;
    bool c1 = false;
    forn(i, 3)
    {
        v[i] -= temp;
    }
    for (int i = 3; i < 9; i += 2)
    {
        temp = min(v[i], v[i + 1]);
        ans += temp;
        v[i] -= temp;
        v[i + 1] -= temp;
    }
    forn(i, 9)
    {
        if (v[i] > 0)
        {
            c1 = true;
        }
        ans += v[i];
    }
    if (c1)
    {
        ans--;
    }
    cout << ans << endl;
    forn(i, mi3)
    {
        cout << www[0] + 1 << " w " << nnn[0] + 1 << " n " << endl;
        cout << www[0] + 1 << " w " << iii[0] + 1 << " i " << endl;
        cout << nnn[0] + 1 << " n " << iii[0] + 1 << " i " << endl;
        www.erase(www.begin());
        nnn.erase(nnn.begin());
        iii.erase(iii.begin());
    }
    ans -= mi3;
    while (ans--)
    {
        if (!www.empty())
        {
            if (!inn.empty())
            {
                cout << www[0] + 1 << " w " << inn[0] + 1 << " n " << endl;
                inn.erase(inn.begin());
                nww.push_back(www[0]);
                www.erase(www.begin());
                continue;
            }
            else if (!nii.empty())
            {
                cout << www[0] + 1 << " w " << nii[0] + 1 << " i " << endl;
                nii.erase(nii.begin());
                iww.push_back(www[0]);
                www.erase(www.begin());
                continue;
            }
        }
        if (!nnn.empty())
        {
            if (!iww.empty())
            {
                cout << nnn[0] + 1 << " n " << iww[0] + 1 << " w " << endl;
                iww.erase(iww.begin());
                wnn.push_back(nnn[0]);
                nnn.erase(nnn.begin());
                continue;
            }
            else if (!wii.empty())
            {
                cout << nnn[0] + 1 << " n " << wii[0] + 1 << " i " << endl;
                inn.push_back(nnn[0]);
                nnn.erase(nnn.begin());
                wii.erase(wii.begin());
                continue;
            }
        }
        if (!iii.empty())
        {
            if (!nww.empty())
            {
                cout << iii[0] + 1 << " i " << nww[0] + 1 << " w " << endl;
                wii.push_back(iii[0]);
                iii.erase(iii.begin());
                nww.erase(nww.begin());
                continue;
            }
            else if (!wnn.empty())
            {
                cout << iii[0] + 1 << " i " << wnn[0] + 1 << " n " << endl;
                nii.push_back(iii[0]);
                iii.erase(iii.begin());
                wnn.erase(wnn.begin());
                continue;
            }
        }
        if (!iww.empty())
        {
            // cout << 1 << endl;
            if (!inn.empty())
            {
                cout << iww[0] + 1 << " w " << inn[0] + 1 << " n " << endl;
                inn.erase(inn.begin());
                iww.erase(iww.begin());
                continue;
            }
        }
        if (!nww.empty())
        {
            // cout << 2 << endl;
            if (!nii.empty())
            {
                cout << nww[0] + 1 << " w " << nii[0] + 1 << " i " << endl;
                nii.erase(nii.begin());
                nww.erase(nww.begin());
                continue;
            }
        }
        if (!wnn.empty())
        {
            // cout << 3 << endl;
            if (!wii.empty())
            {
                cout << wnn[0] + 1 << " n " << wii[0] + 1 << " i " << endl;
                wii.erase(wii.begin());
                wnn.erase(wnn.begin());
                continue;
            }
        }
        if (!iww.empty())
        {
            // cout << 4 << endl;
            if (!wnn.empty())
            {
                cout << iww[0] + 1 << " w " << wnn[0] + 1 << " n " << endl;
                iww.erase(iww.begin());
                nww.push_back(wnn[0]);
                wnn.erase(wnn.begin());
                continue;
            }
        }
        if (!nww.empty())
        {
            // cout << 5 << endl;
            if (!wii.empty())
            {
                cout << nww[0] + 1 << " w " << wii[0] + 1 << " i " << endl;
                nww.erase(nww.begin());
                iww.push_back(wii[0]);
                wii.erase(wii.begin());
                continue;
            }
        }
        if (!inn.empty())
        {
            // cout << 6 << endl;
            if (!nww.empty())
            {
                cout << inn[0] + 1 << " n " << nww[0] + 1 << " w " << endl;
                inn.erase(inn.begin());
                wnn.push_back(nww[0]);
                nww.erase(nww.begin());
                continue;
            }
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