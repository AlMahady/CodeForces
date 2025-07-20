#include<bits/stdc++.h>
#define ll long long
#define nl endl
using namespace std;

void solve() {
    ll n;
    cin >> n;  
    vector<ll> v(n);
    
    for (auto &i:v)cin >>i; 
    if(v==vector<ll>(n,0))cout<<0<<nl;
    else{
        int l=0,r=n-1;
        while(v[l]==0)++l;
        while(v[r]==0)--r;
        if(count(begin(v)+l,begin(v)+r+1,0)==0)cout<<1<<nl;
        else cout<<2<<nl;
    }
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
