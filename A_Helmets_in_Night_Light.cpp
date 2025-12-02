//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll n,p;
    cin>>n>>p;
    
    vector<ll>v1(n),v2(n);

    for(ll &i:v1)cin>>i;
    for(ll &i:v2)cin>>i;

    vector<pair<ll,ll>>v(n);

    for(ll i=0;i<n;i++){
        v[i]={v2[i],v1[i]};
    }

    sort(v.begin(),v.end());

    ll minimum=p;
    ll shared = 1;

    for(auto it:v){
        ll can_shared = it.second;
        ll sharing_cost=it.first;

        if(sharing_cost>=p)break;

        if(shared + can_shared > n)
        {
            minimum += (n-shared) * sharing_cost;
            shared = n;
            break;
        }
        else {
            minimum += can_shared * sharing_cost;
            shared += can_shared;
        }
    }
    minimum += (n-shared) * p;
    cout<<minimum<<nl;

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