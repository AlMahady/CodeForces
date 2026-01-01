//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll n,k,q;
    cin>>n>>k>>q;

    vector<ll>v;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        if(a<=q)v.push_back(1);
        else v.push_back(0);
    }

  
    ll ans =0;
    ll c=0;
    for(ll i=0;i<n;i++){
        if(v[i]==1)c++;
        else {
            if(c>=k){
                ll l=c;
                ans+=(l-k+1)*(l-k+2)/2;
            }
            c=0;
        }
    }
    if(c>=k){
        ll l=c;
        ans+=(l-k+1)*(l-k+2)/2;
    }
    cout<<ans<<nl;
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