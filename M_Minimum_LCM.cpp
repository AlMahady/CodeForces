//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl



ll largestDivisor(ll n) {
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return n / i;
        }
    }
    return 1;
}

void solve(){
    ll n;
    cin>>n;

    if(n%2==0)cout<<n/2<<" "<<n/2<<nl;
    else {        
            ll d=largestDivisor(n);
            cout<<d<<" "<<n-d<<nl;
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