#include <bits/stdc++.h>

#define ll long long
#define nl endl

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n, k ,x;
        cin >> n >> k >>x;
        ll maxsum=(n*(n+1))/2-((n-k)*(n-k+1))/2;
        ll minsum=(k*(k+1))/2;

        if(x>=minsum && x<=maxsum){
            cout<<"YES"<<nl;

        }
        else cout<<"NO"<<nl;
        
        
    }

    return 0;
}
