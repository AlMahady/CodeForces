//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll n,k,b,s;
    cin>>n>>k>>b>>s;

    // stack<ll>a;
    ll lower = k*b;
    ll upper = (k*(b+1)-1)+((n-1)*(k-1));
    if(s>upper || s<lower){
        cout<<-1<<nl;
        return;
    }

    vector<ll>a(n,0);

    a[0]=lower;
    s-=lower;

    for(ll i=0;i<n && s>0;i++){
        ll add = min(s,k-1);
        a[i] +=add;
        s -= add;
    }

    for(ll i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<nl;
    // else{
    //     a.push((k*(b+1))-1);
    //     ll x=s-((k*(b+1))-1);
    //     ll m=1;

    //     while(x>0){
    //         if(x<k){
    //             a.push(x);
    //             x-=x;
    //             m++;
    //     }
    //     else{
    //         a.push(k-1);
    //         x-=k-1;
    //         m++;
    //     }
    //     }
    //     if(n>m){
    //         while(n!=m){
    //             a.push(0);
    //             m++;
    //         }
    //     }
    //     while(!a.empty()){
    //         cout<<a.top()<<" ";
    //         a.pop();
    //     }
    //     cout<<nl;
    // }
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