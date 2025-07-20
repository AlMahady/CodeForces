//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
void solve(){
    ll n;
    cin>>n;

    string a,b;
    cin>>a>>b;

    ll cnta1=0,cnta0=0;
    ll cntb1=0,cntb0=0;
bool bol=false;
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(a[i]=='1')cnta1++; 
            if(b[i]=='0')cntb1++;
        }
        if(i%2){//i is odd
            if(b[i]=='0')cntb0++;
            if(a[i]=='1')cnta0++;
        }
        

    }
    if((cntb0<cnta1)||(cntb1<cnta0))bol=true;
    if(bol)cout<<"NO"<<nl;
    else cout<<"YES"<<nl;
    
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