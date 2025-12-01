//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll q;
    cin>>q;
    vector<ll>v(q);
    for(ll &i:v)cin>>i;

    string s;
    if(is_sorted(v.begin(),v.end())){
        for(int i=0;i<v.size();i++){
            s.push_back('1');
        }
    }
    else(
        
    )
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