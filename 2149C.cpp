//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());

    unordered_map< ll , ll>mp;
    for(ll i=0;i<n;i++){
        mp[a[i]]++;
    }

    ll L=0,F=mp[k];

    for(ll i=0;i<k;i++){
        if(mp[i]==0)L++;
    }
    cout<<max(L,F)<<nl;


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