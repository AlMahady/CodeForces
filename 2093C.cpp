#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

bool is_prime(ll n){
    if(n<=1)return false;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}


void solve(){
    ll x, k;
    cin >> x >> k;

    if(x>1 && k>1)cout<<"NO"<<nl;
    else if(k==1 ){
        cout<<((is_prime(x)?"YES":"NO"))<<nl;
    }
    else cout<<((k==2)?"YES":"NO")<<nl;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
