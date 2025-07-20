//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }

    sort(v.rbegin(), v.rend()); // sort descending

    bool all_same=true;
    for(int i=0;i<n-1;i++){
        if(v[i]!=v[i+1]){
            all_same=false;
            break;
        }
    }




    bool ugly = false;
    ll sum=0;
    for(ll i=0;i<n;i++){
        if(sum==v[i]){
            if(i+1<n){
                swap(v[i], v[i+1]);
                ugly=false;
                break;
            }
            else{
                ugly=true;
                break;
            }
        }
        sum+=v[i];
    }

    if(ugly || all_same){ 
        cout<<"NO"<<nl;
    }
    else { 
        cout<<"YES"<<nl;
        for(ll i:v)cout<<i<<" ";
        cout<<nl;
    }
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
