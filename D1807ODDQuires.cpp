#include <bits/stdc++.h>

#define ll long long
#define nl endl

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll n, q;
        cin >> n >> q;
        vector<ll> vec(n);
        vector<ll>prefix(n+1,0);
        ll original_sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> vec[i];
            original_sum += vec[i];
            prefix[i+1]=prefix[i]+vec[i];
        }

        while (q--) {
            ll l, r, k;
            cin >> l >> r >> k;
            l--; r--;

            ll oldsum = prefix[r+1]-prefix[l];
            ll newsum = (r - l + 1) * k;
            ll ans = original_sum - oldsum + newsum; 

            if (ans % 2 != 0) { 
                cout << "YES" << nl;
            } else {
                cout << "NO" << nl;
            }
        }
    }

    return 0;
}
