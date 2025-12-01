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

    if(*min_element(v.begin(),v.end())==*max_element(v.begin(),v.end())){
        cout<<"NO"<<nl;
        return;
    }
    else {
        cout<<"YES"<<nl;
        cout<<v[n-1]<<" ";
        for(ll i=0;i<n-1;i++)cout<<v[i]<<" ";
        cout<<nl;
    }
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