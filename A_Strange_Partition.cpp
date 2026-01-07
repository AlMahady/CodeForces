//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll n,x;
    cin>>n>>x;

    ll sum=0;
    vector<ll>v;
    for(ll i=0;i<n;i++){
        ll m;
        cin>>m;
        v.push_back(m);
        sum+=m;
    }

    ll d=0;
    for(auto i:v){
        if(i%x==0)d+=i/x;
        else {
            d+=i/x+1;
        }
    }

    ll e;
    if(sum%x==0)e=sum/x;
    else e=sum/x+1;

    cout<<e<<" "<<d<<nl;

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