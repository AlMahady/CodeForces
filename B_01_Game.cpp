//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    string s;
    cin>>s;

    ll count_1=0,count_0=0;
    for(char c:s){
        if(c=='1')count_1++;
        else count_0++;
    }
    if(count_0==count_1){
        if(count_0%2==0)cout<<"NET"<<nl;
        else cout<<"DA"<<nl;
    }
    else {
        ll x= min(count_0,count_1);
        if(x%2==0)cout<<"NET"<<nl;
        else cout<<"DA"<<nl;
    }

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