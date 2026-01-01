// Be afraid , Here lives a Monster//

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve()
{
    ll n;
    char c;
    string s;
    cin >> n >> c >> s;
    if (c == 'g')
    {
        cout << 0 << nl;
        return;
    }

    string x = s + s;
    ll ans = 0;

    for (ll i = 0; i < n; i++)
    {
        if (s[i] == c)
        {
            ll j = i;
            while (x[j] != 'g')
                j++;
            ans = max(ans, j - i);
        }
    }

    cout << ans << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
