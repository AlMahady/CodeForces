//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll n,k;
    cin>>n>>k;

    vector<ll>v(n);
    for(ll &i:v)cin>>i;
    sort(v.begin(),v.end());
    ll sum=0;

    for(ll i=0;i<k;i++){
        if(v[i]<0)
        sum+=v[i];
        else break;
    }
    cout<<abs(sum)<<nl;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ll t;
    // cin >> t;
    // while(t--){
        solve();
    // }
    return 0;
}