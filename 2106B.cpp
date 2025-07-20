//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
void solve(){
    ll n,x;
    cin>>n>>x;

    vector<ll>vec;
    iota(vec.begin(),vec.end(),0);
    if(n!=x)vec.push_back(x);
    for(ll i:vec)cout<<i<<" ";
    cout<<nl;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}