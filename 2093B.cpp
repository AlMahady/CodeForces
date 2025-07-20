//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
    string n;
    cin>>n;
    ll x= n.length()-1;

    ll ans=0,l=0,z=0;
    for(int i=x;i>=0;i--){
        if(n[i]!='0')break;
        l++;
    }
    for(int i=x;i>=0;i--){
        if(n[i]!='0')z++;
    }
    ans=l+z-1;
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