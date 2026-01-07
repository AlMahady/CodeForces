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



    map<ll,ll>freq;
    for(ll x:v){
        freq[x]++;
    }
    for(auto i:freq){
        if(i.second == 1){
            cout<<-1<<nl;
            return;
        }
    }

    vector<ll>pm(n);
    for(ll i=0;i<n;i++){
        pm[i]=i+1;
    }

    ll l=0,r=0;
    while(r<n){
        if(v[l]==v[r])r++;
        else{
            rotate(pm.begin()+l,pm.begin()+1+l,pm.begin()+r);
            l=r;
        }
    }
    rotate(pm.begin()+l,pm.begin()+1+l,pm.begin()+r);

    for(auto i:pm)cout<<i<<" ";
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