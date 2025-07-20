//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll &i:v)cin>>i;

    ll net=0;
    ll no1=0;
    ll no2=0;
    ll no3=0;
    for(ll i=0;i<n;i++){
        if(v[i]==4)net+=1;
        else if(v[i]==1)no1+=1;
        else if(v[i]==3)no3+=1;
        else if(v[i]==2)no2+=1;
    }

    ll no31=min(no3,no1);
    net+=no31;
    no3-=no31;
    no1-=no31;

    net+=no3;

    ll net21=no2*2+no1;
    if(net21%4==0)net+=net21/4;
    else net+=net21/4+1;


    cout<<net<<nl;

    



}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
        solve();
    
    return 0;
}