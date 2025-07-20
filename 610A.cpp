//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
void solve(){
    ll n;
    cin>>n;


    ll ans=0;
    

    if(n<6 || n%2!=0){
        ans=0;
    }
    else {
        ans=n/4;
        if(n%4==0){
            ans-=1;
        }
    }
    cout<<ans;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}