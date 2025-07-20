#include <bits/stdc++.h>

#define ll long long
#define nl endl

using namespace std;
void solve (){
    ll n;
    cin>>n;
    
    ll x,y;
     x=n/3;
     y=x;
    if(n%3==1)x+=1;
    else if(n%3==2)y+=1;
    cout<<x<<" "<<y<<nl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
     }

    return 0;
}
