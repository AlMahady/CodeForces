//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll n;
    cin>>n;

    vector<ll>v(n);
    if(n%2==0){
        v[0]=1;
        v[1]=3;
        for(int i=2;i<n;i++){
            v[i]=2;
        }
    }
    else {
        for(int i=0;i<n;i++){
            v[i]=1;
        }
    }
    for(ll i:v)cout<<i<<" ";
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