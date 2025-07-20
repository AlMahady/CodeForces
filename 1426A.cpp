//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
void solve(){
    ll n,x;
    cin>>n>>x;
    ll ans=1;n=n-2;
    
        while(n>0){
            n-=x;
            ans++;
        }
        cout<<ans<<nl;
    
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