//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
void solve(){
    string x;
    cin>>x;
    bool bol=false;
    if(x[0]!='y' && x[0]!='Y')bol=true;
    if(x[1]!='e' && x[1]!='E')bol=true;
    if(x[2]!='s' && x[2]!='S')bol=true;
    if(!bol)cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
    

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