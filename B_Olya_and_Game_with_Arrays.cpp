//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll n;
    cin>>n;

    ll ans=0;
    vector<ll>vmax,vmin;

    if(n==1){
        ll m;
        cin>>m;
        vector<ll>x(m);
        for(ll j=0;j<m;j++){
            cin>>x[j];
        }
        ans = *min_element(x.begin(),x.end());
        cout<<ans<<nl;
    }
    else {
        for(ll i=0;i<n;i++){
            ll m;
            cin>>m;
            vector<ll>x(m);
            for(ll j=0;j<m;j++){
                cin>>x[j];
            }
            sort(x.begin(),x.end());
            vmax.push_back(x[1]);
            vmin.push_back(x[0]);
        }
        sort(vmax.begin(),vmax.end());
        sort(vmin.begin(),vmin.end());
        for(ll i=1;i<n;i++){
            ans+=vmax[i];
        }
        ans+=vmin[0];
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