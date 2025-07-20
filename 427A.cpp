//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
void solve(){
    ll m;
    cin>>m;
    ll n=m;
    vector<ll>vec(m);
    ll police=0;
    ll crimel=0;
    for(ll i=0;i<n;i++){
        cin>>vec[i];
        if(vec[i]>0){
            police+=vec[i];
        }
        else{
            if(police<1)crimel++;
            else police--;
        }
     
        
        
        
        
    }cout<<crimel<<nl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}