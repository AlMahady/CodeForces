//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
void solve(){
    ll n;
    cin>>n;
    vector<ll>vec(n);
    ll odd=0,even=0;
    for(auto &i:vec){
        cin>>i;
        if(i%2==0)even++;
        else odd++;
    }
    if(odd%2!=0)cout<<"NO"<<nl;
    else cout<<"YES"<<nl;
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