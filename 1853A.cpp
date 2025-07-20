//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
void solve(){
    ll n;
    cin>>n;

    ll mindiff=INT_MAX;
    ll temp;

    vector<ll>vec(n);
    for(auto &i:vec){
        cin>>i;
    }
    for(int i=0;i<n-1;i++){
        temp=vec[i+1]-vec[i];
        mindiff=min(temp,mindiff);
    }
    if(mindiff==0)cout<<1<<nl;
    else if(mindiff<0)cout<<0<<nl;
    else cout<<(mindiff/2)+1<<nl;
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