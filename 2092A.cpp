//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
void solve(){
    ll n;
    cin>>n;
    vector<ll>vec(n);

    ll h,l;

    for(ll &i:vec)cin>>i;
    sort(vec.begin(),vec.end());
    h=vec[n-1];
    l=vec[0];

    cout<<h-l<<nl;


}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}