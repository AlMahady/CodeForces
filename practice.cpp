//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
void solve(){
    ll n;
    cin>>n; 
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    ll smallai=INT_MAX,smallaj=INT_MAX;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            smallai=min(smallai,a[i]+a[j]-i+j);
        }
    }
    cout<<smallai<<nl;
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