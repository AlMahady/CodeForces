#include<bits/stdc++.h>
#define ll long long
#define dd double
#define nl endl
using namespace std;

void solve() {
    ll n;
    cin>>n;
    ll count1=0;
    vector<ll>vec;
    ll power=1;
    while(n>0){
        int temp=n%10;
        if(temp!=0){
            count1++;
            vec.push_back(temp*power);

        }
        n/=10;
        power*=10;
    }
    cout<<nl<<count1<<nl;

    for(auto i:vec){
        cout<<i<<" ";
    }


        
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
