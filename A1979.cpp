#include<bits/stdc++.h>
#define ll long long
#define dd double
#define nl endl
using namespace std;

void solve() {
    ll n;
    cin>>n;
    ll max=n/4;
    ll min=n/6;

    if(n>=4 && n%2==0){
        if(n%6!=0){
            min++;
        }
        cout<<min<<" "<<max<<nl;
 }
 else cout<<-1<<nl;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
