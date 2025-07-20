#include <bits/stdc++.h>

#define ll long long
#define nl endl

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin>>n;
        vector<ll>vec(n);
        for(ll i=0;i<n;i++){
            cin>>vec[i];
        }
        ll ans =0;
        for(ll i=0;i<n;i++){
            ll temp=vec[i]-(i+1);
            ans=__gcd(abs(temp),ans);
        }
        cout<<ans<<nl;
    }


    return 0;
}
