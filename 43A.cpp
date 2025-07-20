//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
void solve(){
    ll n;
    ll max=0;
    string maxw;
    cin>>n;
    vector<string>s(n);
    set<string>k;
    unordered_map<string,int>wordfreq;
    for(string &x:s){
        cin>>x;
        k.insert(x);
        wordfreq[x]++;
    }
    for(auto &pair:wordfreq){
        if(pair.second>max){
            max=pair.second;
            maxw=pair.first;
        }
    }



    if(k.size()==1){
        for(auto i:k){
            cout<<i<<nl;
        }
        return;
    }
    else{
        cout<<maxw<<nl;
    }


}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    
    return 0;
}