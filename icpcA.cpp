//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll n,m;
    cin>>n>>m;

    set<ll>vec;
    
    for(ll i=0;i<n;i++){
        ll p;
        cin>>p;
        vec.insert(p);
    }

    ll ans= n;

    for(int i=0;i<m;i++){
        ll x,y,z;
        cin>>x>>y>>z;
        if(vec.find(x)!=vec.end() && vec.find(y)!= vec.end()){
            ans++;
            vec.insert(z);
        }
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