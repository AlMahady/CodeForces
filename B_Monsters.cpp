//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

bool cmp(const pair<ll,ll> &a,const pair<ll,ll> &b){
    if(a.first == b.first)return a.second<b.second;
    return a.first > b.first;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(auto &it:v)cin>>it;

    vector<pair<ll,ll>>m;

    for(ll i=1;i<=n;i++){
        m.push_back({(v[i-1]%k==0?k:v[i-1]%k),i});
    }
    sort(m.begin(),m.end(),cmp);
    
    for(ll i=0;i<n;i++)cout<<m[i].second<<" ";
    cout<<nl;
    
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