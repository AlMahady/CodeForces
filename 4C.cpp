//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll x;
    cin>>x;

    map<string,int>mp;

    for(int i=0;i<x;i++){
        string s;
        cin>>s;
        if(mp[s]==0)cout<<"OK"<<nl;
        else cout<<s<<mp[s]<<nl;
        
        mp[s]++;    
    }
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}