//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
void solve(){
    ll n,a,b;
    cin>>n>>a>>b;
    if(n==a && a==b && b==n){
        cout<<"YES"<<nl;
    }
    else if(n-1>a+b){
        cout<<"YES"<<nl;
    }
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