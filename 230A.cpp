//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll s,n;
    cin>>s>>n;

    vector<pair<ll,ll>>v;

    for(ll i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    bool can=true;
    for(auto p:v){
        if(s>p.first){
            s+=p.second;
        }
        else {
            can=false;
            break;
        }
    }
    if(can)cout<<"YES"<<nl;
    else cout<<"NO"<<nl;


}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}