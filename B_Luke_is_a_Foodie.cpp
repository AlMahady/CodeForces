// Be afraid , Here lives a Monster//

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve()
{
    ll n, x;
    cin >> n >> x;

    vector<ll> v(n);
    for (ll &i : v)
        cin >> i;

    vector<pair<ll, ll>> segments(n);

    for (ll i = 0; i < n; i++)
    {
        segments[i] = {v[i] - x, v[i] + x};
    }
    ll ans = 0;

    ll l = segments[0].first;
    ll r = segments[0].second;

    for (ll i = 1; i < n; i++)
    {
        l = max(l, segments[i].first);
        r = min(r, segments[i].second);
        if (l > r)
        {
            ans++;
            l = segments[i].first;
            r = segments[i].second;
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