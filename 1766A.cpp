//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll n;
    cin>>n;
    ll cnt=0;

    string s=to_string(n);

    ll x=s.length();
    ll ans=((x-1)*9)+n/(pow(10,x-1));
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