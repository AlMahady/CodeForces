//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;

    int ops = 0;

    for (int i = n - 2; i >= 0; i--) {
        
        while (a[i] >= a[i + 1] && a[i]>0) {
            a[i] /= 2;
            ops++;
        }
        
        if (a[i] >= a[i + 1]) {
            cout << -1 << nl;
            return;
        }
    }
    cout << ops << nl;
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