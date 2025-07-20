//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll a,b;
    cin>>a>>b;

    ll g=(a*b)/__gcd(a,b);
    if(g==b)cout<<g*(b/a)<<nl;
    else cout<<g<<nl;
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