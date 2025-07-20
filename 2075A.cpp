#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
void solve(){
    ll n,k;
    cin>>n>>k;
    ll x=0;
    if(n%2)//odd
    {
        n=n-k;
        x++;
        if(n>0){
            x+=n/(k-1);
        }
        if(n%(k-1)!=0)x++;
        cout<<x<<nl;
    }
    else // even 
    {
        x=n/(k-1);
        if(n%(k-1)!=0)x++;
        cout<<x<<nl;
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