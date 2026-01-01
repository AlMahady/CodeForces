//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll &i:v)cin>>i;
    ll cnt=0;
    for(ll i=0;i<n;i++){
        if(v[i]==2)cnt++;
    }
    if(cnt%2!=0)cout<<"-1"<<nl;
    else {
        ll index=cnt/2;
        ll ans;
        for(ll i=0;i<n;i++){
            if(v[i]==2)index--;ans = i+1;    
            if(index==0)break;          
                    
        }
        cout<<ans<<nl;
    }
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