//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;

    vector<ll>prefix_v;

    set<char>x1;
    for(char c:s){       
        x1.insert(c);
        prefix_v.push_back(x1.size());
    }
    
    reverse(s.begin(),s.end());
    vector<ll>suffix_v(n);

    ll i=n-1;
    set<char>x;
    for(char c:s){     
        x.insert(c);
        suffix_v[i]=x.size();
        i--;
    }

    // for(ll i:suffix_v)cout<<i<<nl;
    ll ans=0;
    for(ll i=0;i<n-1;i++){
        ans = max(prefix_v[i]+suffix_v[i+1],ans);
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