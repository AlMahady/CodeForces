//Be afraid , Here lives a Monster//
//yes this is chatGPT generated code but only this//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll n;
    cin >> n;

    vector<ll> a(n);
    for(ll &x : a) cin >> x;

    const ll TARGET = (ll)1e18;

    // Collect distinct colors
    set<ll> S(a.begin(), a.end());
    ll d = S.size();   // number of distinct colors

    // Find smallest v in S such that v >= d
    ll minv = LLONG_MAX;
    for(ll x : S){
        if(x >= d) minv = min(minv, x);
    }

    ll T = TARGET - n;  // how many new cells must be colored

    // If a stabilizing value exists and reached within T steps
    if(minv != LLONG_MAX){
        ll steps = minv - d + 1;
        if(steps <= T){
            cout << minv << nl;
            return;
        }
    }

    // Otherwise, still increasing at TARGET-th position
    ll ans = d + (T - 1);
    cout << ans << nl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
