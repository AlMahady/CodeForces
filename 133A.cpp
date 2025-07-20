//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
void solve(){
    string s;
    cin>>s;
    bool bol=false;
    for(int i=0;i<s.size();i++){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')bol=true;
    }
    if(bol)cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}