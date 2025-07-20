#include<bits/stdc++.h>
#define ll long long
#define dd double
#define nl endl
using namespace std;

void solve() {
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(auto &i:arr)cin>>i;
    ll net=0;
    for(int i=n-2;i>=0;i--){
        while (arr[i]>=arr[i+1] && arr[i]>0)
        {
            net++;
            arr[i]/=2;
        }
        if(arr[i]==arr[i+1]){
            cout<<-1<<nl;
            return;
        }
        
        
    }
cout<<net<<nl;
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
