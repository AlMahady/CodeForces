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

    ll ans=0;
    for(ll i=0;i<n-1;i++){
        if((v[i]%2==0 && v[i+1]%2==0)||(v[i]%2!=0 && v[i+1]%2!=0)){
            ans++;
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