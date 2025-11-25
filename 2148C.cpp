//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll n,m;
    cin>>n>>m;

    ll ans = m;
    bool x= true;

    for(int i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;

        if(x==true && ((a%2==0 && b==1)||(a%2!=0 && b==0))){
            ans--;
            x=false;
        }
        if(x==false && ((a%2==0 && b==0)||(a%2!=0 && b==1))){
            ans--;
            x=true;
        }       
    }
    cout<<ans<<nl;
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