//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll n;
    cin>>n;

    vector<ll>v(n);
    for(ll &i:v){
        cin>>i;
    }
    sort(v.rbegin(),v.rend());

    ll Mavg=INT_MIN;
    for(ll i=0;i<n;i++){
        ll sum=0,avg;
        sum+=v[i];
        avg=sum/(i+1);
        Mavg = max(avg,Mavg);
    }
    cout<<Mavg<<nl;

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