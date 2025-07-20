//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
void solve(){
    ll n;
    string s;
    cin>>n>>s;

    ll cnt1=0;
    ll cnt0=0;

    for(char c:s){
        if(c=='1')cnt1++;
    }
    cnt0=n-cnt1;
    
    ll result=cnt1*(n-1)+cnt0;
    cout<<result<<nl;

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