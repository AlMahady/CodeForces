//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
 int n;
 cin>>n;
 string s,t;
 cin>>s>>t;
 sort(s.begin(),s.end());
 sort(t.begin(),t.end());
    if(s==t){
        cout<<"YES"<<nl;
    }
    else cout<<"NO"<<nl;
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