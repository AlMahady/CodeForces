//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll &i:v)cin>>i;

    ll l,m,r;

    bool possible=false;
    for(ll i=0;i<n-2;i++){
        for(ll j=i+1;j<n-1;j++){
            if(v[i]<v[j]){
                l=i;
                m=j;
                for(ll k=j+1;k<n;k++){
                    if(v[k]<v[m]){
                        r=k;
                        possible=true;
                        break;
                    }
                    else j++;
                }
            }
            else j++;
            if(possible)break;
        }
        if(possible)break;
    }
    if(possible){
        cout<<"YES"<<nl;
        cout<<l+1<<" "<<m+1<<" "<<r+1<<nl;
    }else cout<<"NO"<<nl;
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