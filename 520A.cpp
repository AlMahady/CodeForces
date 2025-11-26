//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll x;
    cin>>x;

    string s;
    cin>>s;

    map<char,int>y;
    for(char c: s){
        c= tolower(c);
        if(c>=97 && c<=122){
            y[c]=1;
        }
    }
    if(y.size()==26)cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
}