//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    string n;
    cin>>n;
    set<char>s;
    for(char c:n)
    s.insert(c);
    ll x=s.size();
    if(x%2!=0)cout<<"IGNORE HIM!"<<nl;
    else cout<<"CHAT WITH HER!"<<nl;
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}