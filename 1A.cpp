//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll n,m,a;
    cin>>n>>m>>a;

    ll x,y;
    if(n%a==0)x=n/a;
    else x=n/a+1;
    if(m%a==0)y=m/a;
    else y=m/a+1;

    cout<<x*y<<nl;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}