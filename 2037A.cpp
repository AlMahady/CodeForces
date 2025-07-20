//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

vector<bool>sieve;

void buildSieve(int n) {
    sieve.assign(n+1,true);
    sieve[0]= sieve[1] = false;

    for(int p=2;p*p <= n;++p){
        if(sieve[p]){
            for(int i=p*p;i<=n;i+=p){
                sieve[i] = false;
            }
        }
    }
}

void solve(){
    ll n;
    cin>>n;

    buildSieve(2*n);

    vector<ll>v;

    ll oddl;
    for(ll i=1;i<=n;i+=2){
        v.push_back(i);
        oddl=i;
    }


    bool imp=false;
    for(ll i=2;i<=n;i+=2){     
        if(sieve[oddl+i]==false){
            v.push_back(i);
            imp=true;
            oddl=i;
            break;
        }
    }

    for(ll i=2;i<=n;i+=2){
        if(i==oddl)continue;
        else v.push_back(i);
    }

    if(imp){
    for(ll i:v)cout<<i<<" ";
    cout<<nl;
    }
    else cout<<-1<<nl;

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