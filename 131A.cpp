//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    string s;
    cin>>s;
    bool x=true,y=true;

    for(ll i=0;i<s.length();i++){
        if(islower(s[i])){
          y=false;
          break;  
        }
    }
    

    for(ll i=1;i<s.length();i++){
        if(islower(s[i])){
          x=false;
          break;  
        }
    }
    if(x){
            if(s[0]>=97)
            s[0]-=32;

            for(ll i=1;i<s.length();i++){
                if(s[i]<97)s[i]+=32;
            }
    }
    if(y){
        for(ll i=0;i<s.length();i++){
                if(s[i]<97)s[i]+=32;
            }
    }
    cout<<s<<nl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    
        solve();
    
    return 0;
}