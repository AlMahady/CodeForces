//Be afraid , Here lives a Monster//

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve(){
    string s;
    cin >> s;
    ll x = s.length() - 1;
    ll ans = INT_MAX;

    for(ll i = x; i >= 0; i--){
        if(s[i] == '0'){
            for(ll j = i - 1; j >= 0; j--){
                if(s[j] == '0' || s[j] == '5'){
                    ll moves = (x - i) + (i - 1 - j);
                    ans = min(ans, moves);
                    break;
                }
            }
        }

        if(s[i] == '5'){
            for(ll j = i - 1; j >= 0; j--){
                if(s[j] == '2' || s[j] == '7'){
                    ll moves = (x - i) + (i - 1 - j);
                    ans = min(ans, moves);
                    break;
                }
            }
        }
    }

    if(ans == INT_MAX) cout << -1 << nl;
    else cout << ans << nl;
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
