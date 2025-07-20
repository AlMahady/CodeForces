// Be afraid , Here lives a Monster//

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    if(a==b){
        string x=(c%2)?"First":"Second";
        cout<<x<<nl;
    }
    else if(a>b)cout<<"First"<<nl;
    else if(a<b)cout<<"Second"<<nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}