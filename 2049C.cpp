//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
void solve(){
    ll n;
    cin>>n;
    vector<ll>vec(n);


    bool all0=true;

    bool no0=false;


    for(ll i=0;i<n;i++){
        cin>>vec[i];
        if(vec[i]>0)all0=false;
        if(vec[i]!=0)no0=true;
    }
    


    if(all0)cout<<0<<nl;
    else {
        ll cont=0;
        ll low=0;
        ll up=n;
        
        bool x=true;
        bool y=true;
        
        while(x || y){
            ll i=0,j=n-1;
            if(vec[i]==0){
                i++;low++;
            }
            else x=false;
            if(vec[j]==0){
                j--;up--;
            }else y=false;

        }


        for(ll i=low;i<up-1;i++){
            

            if(vec[i]==0 && vec[i+1]>0)cont++;
        }

        
        if(cont>1) cout<<2<<nl;
        else if(cont==1 || no0)cout<<1<<nl;
    }
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