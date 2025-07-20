//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
void solve(){
    ll n,x;
    cin>>n>>x;

    vector<ll>vec(n);
    ll F=0;
    vector<ll>vecl;

    for(ll i=0;i<n;i++){
        cin>>vec[i];
        if(vec[i]>=x){
            F++;
        }
        else {
            vecl.push_back(vec[i]);
        }
    }
    sort(vecl.rbegin(),vecl.rend());

    ll L=0;

    ll count=0;
    for(ll i=0;i<vecl.size();i++){
    count++;
         if(vecl[i]*count>x){
        L++;
        count=0;
    }
}
cout<<L+F<<nl;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}