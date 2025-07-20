//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<ll>v(n);
    ll x=n;
    for(ll i=n-2;i>=0;i--){
        if(s[i]=='>'){
            v[i+1]=x--;
        }
    }
    for(ll i=0;i<n;i++){
        if(v[i]==0){
            v[i]=x--;
        }
    }
    for(ll i:v)cout<<i<<" ";
    cout<<nl;
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