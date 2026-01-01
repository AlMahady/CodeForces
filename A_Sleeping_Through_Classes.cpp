//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    ll ans=0,skip=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='1')skip=k;
        else if(s[i]=='0'){
            if(skip>0)skip--;
            else ans++;
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