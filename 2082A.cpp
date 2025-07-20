//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
void solve(){
    ll m,n;
    cin>>m>>n;
    vector<vector<ll>>vec(m,vector<ll>(n,0));
    for(ll i=0;i<m;i++){
        string x;
        cin>>x;
        for(ll j=0;j<n;j++){
            vec[i][j]=x[j]-'0';
        }
    }
    ll count1=0;
    ll count2=0;
    for(ll i=0;i<m;i++){
        ll x=0;
        for(ll j=0;j<n;j++){
            x=x^vec[i][j];
        }
        if(x==1)count1+=1;
    }
    for(ll i=0;i<n;i++){
        ll y =0;
        for(ll j=0;j<m;j++){
            y=y^vec[j][i];
        }
        if(y==1)count2+=1;
    }
    cout<<max(count1,count2)<<nl;

    
    
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