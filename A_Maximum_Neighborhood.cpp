//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll n;
    cin>>n;
    if(n==1)cout<<1<<nl;
    else if(n==2)cout<<9<<nl;
    else if (n>2 && n<5) cout<<(n*n)+((n*n)-1)+((n*n)-2)+((n*n-n)-1)<<nl;
    else cout<<((5*(n*n))-(5*n)-5)<<nl;
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