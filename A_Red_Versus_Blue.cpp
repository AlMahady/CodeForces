//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll n,r,b;
    cin>>n>>r>>b;

    ll seg = r/(b+1);
    ll rem = r%(b+1);

    vector<char>v;
    ll R=0;
    ll B=0;
    while(v.size()<n){
        ll cur=seg+(rem>0);
        if(rem>0)rem--;

        for(ll i=0;i<cur && R<r ;i++){
            v.push_back('R');
            R++;
        }
        if(B<b){
        v.push_back('B');
        B++;
        }
    }
    for(char c:v)cout<<c;
    cout<<nl;
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