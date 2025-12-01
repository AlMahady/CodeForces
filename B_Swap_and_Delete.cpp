//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    string s;
    cin>>s;
    ll n1=0,n0=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0')n0++;
        else n1++;
    }
    ll ans=s.length();

    if(s.length()==1){
        cout<<1<<nl;
        return;
    }

    if(n1!=n0){
        for(int i=0;i<s.length();i++){  
        if(s[i]=='0'){
            if(n1==0)break;
            n1--;
        }
        else {
            if(n0==0)break;
            n0--;
        }
        ans--;

    }
    }
    else ans=0;
    cout<<ans<<nl;
    
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