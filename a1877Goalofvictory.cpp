#include<bits/stdc++.h>
#define ll long long
#define nl endl
using namespace std;
void solve(){
    ll n,k;
    cin>>k;
    n=k-1;
    ll net=0;
    vector<ll>vec(n);

    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    for(int v:vec){
        net=net+v;
    }
    net=net*-1;
    cout<<net<<nl;

    

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}