//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
 ll n;
 cin>>n;
 set<ll>s;
 for(int i=0;i<n;i++){
    ll x;
    cin>>x;
    s.insert(x);
 }
 cout<<s.size()<<nl;
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