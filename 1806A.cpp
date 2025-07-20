//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
 ll a,b,c,d;
 cin>>a>>b>>c>>d;

 if(b>d||((d-b)<c-a)){
    cout<<-1<<nl;
 }
 else cout<<2*(d-b)+a-c<<nl;

 
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