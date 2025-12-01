//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll n,k;
    cin>>n>>k;

    vector<ll>v(n);
    for(ll &i:v)cin>>i;
    
    ll ans = INT_MAX;
    ll even = 0;
    for(ll i=0;i<n;i++){
        if(v[i]%2==0)even++;
        if(v[i]%k==0)ans=0;

        ans=min(ans,k-v[i]%k);
    }
    if(k==4){
        if(even>=2)ans=min(ans,0ll);
        if(even==1)ans=min(ans,1ll);
        if(even==0)ans=min(ans,2ll);
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