//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll a,b,c;
    cin>>a>>b>>c;

    ll n1=a*(b+c);
    ll n2=(a+b)*c;
    ll n3=a*b*c;
    ll n4=a+b+c;
    cout<<max(max(n1,n4),max(n3,n2))<<nl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ll t;
    // cin >> t;
    // while(t--){
        solve();
    
    return 0;
}