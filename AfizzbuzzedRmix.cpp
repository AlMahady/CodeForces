#include<bits/stdc++.h>
#define ll long long
#define nl endl
using namespace std;
void solve(){
    int n;
    cin>>n;

    ll value1=n/15;
    ll count =value1*3;

    int remainder=n%15;

    if(remainder>=2) count+=3;
    else if(remainder>=1) count+=2;
    else if(remainder>=0) count+=1;

    cout<<count<<nl;


    

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