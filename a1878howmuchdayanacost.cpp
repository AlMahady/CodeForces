#include<bits/stdc++.h>
#define ll long long
#define nl endl
using namespace std;
void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll>vec(n);

    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    bool flag=false;
    for(int i=0;i<n;i++){
        if(vec[i]==k){
            flag=true;
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<nl;

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