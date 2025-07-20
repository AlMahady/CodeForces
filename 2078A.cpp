//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll>vec(n);
    for(auto &i:vec)cin>>i;
    bool bol=false;
    for(int i=0;i<n;i++){
        if(vec[i]==k)bol=true;
    }
    if(!bol){
        cout<<"NO"<<nl;
    }
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