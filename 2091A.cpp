//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
void solve(){
    ll n;
    cin>>n;
    vector<string>vec(n);
    string target="01032025";
    for(string &x:vec)cin>>x;

    ll minc=0;
    ll k=0;
    ll x=target.size();

    for(ll i=0;i<n && k!=x ;i++){
        size_t pos=target.find(vec[i]);
        if(pos!= string::npos){
            minc++;
            k++;
            target.erase(pos,1);

        }else {
            minc++;
        }
        
    }
    if(k==x)cout<<minc<<nl;
    else cout<<0<<nl;
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