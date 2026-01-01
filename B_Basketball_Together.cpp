//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll n,d;
    cin>>n>>d;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];

    sort(v.begin(),v.end());
    ll ans=0;
    ll j=n-1;
    ll i=-1;
    
    ll x=1;
    while(i<j){
        if(v[j]*x<=d && i<j){
            i++;
            x++;
        }
        else {
            ans++;
            j--;
            x=1;
        }
    }
    cout<<ans<<nl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}