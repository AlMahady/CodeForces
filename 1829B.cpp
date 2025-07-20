//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll n;
    cin>>n;
    vector<ll>vec(n);

    ll x=0;
    ll l=0;
    for(ll i=0;i<n;i++){
        ll temp;
        cin>>temp;
        if(temp==0){
            x++;
            l=max(l,x);
        }
        else if(temp==1)x=0;
    }
    cout<<l<<nl;
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