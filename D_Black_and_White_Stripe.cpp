//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll n,k;
    string s;

    cin>>n>>k>>s;

    ll l=0,wcnt=0;
    ll ans = INT_MAX;
    for(ll r=0;r<n;r++){
        if(s[r]=='W')wcnt++;
        if(r-l+1==k){
            ans = min(ans,wcnt);
            if(s[l]=='W'){
                wcnt--;
            }
            l++;
        }
    }
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