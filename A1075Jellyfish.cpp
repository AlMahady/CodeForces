#include <bits/stdc++.h>

#define ll long long
#define nl endl

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll a,b,n;
        cin>>a>>b>>n;

        vector<ll>vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        ll nettime=b;

        for(ll i:vec){
            ll temp=min(a-1,i);
            nettime+=temp;
        }
        cout<<nettime<<nl;
    }

    return 0;
}
