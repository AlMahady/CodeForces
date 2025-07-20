#include <bits/stdc++.h>

#define ll long long
#define nl endl

using namespace std;
void solve (){
    int n;
    cin>>n;
    vector<ll>a(n);
    for(auto &i:a)cin>>i;

    ll ans=LLONG_MAX;
    for(ll i:a){
        i=abs(i);
        ans=min(i,ans);
        if(i==0){
            ans=i;break;
        }
    }
    cout<<ans<<nl;

}

int main() {
    // int t;
    // cin >> t;

    // while (t--) {
        solve();
        
        
    // }

    return 0;
}
