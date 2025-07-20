#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve() {
    ll x;
    cin >> x;

    if (x < 3) { // If x is too small, a valid triangle is impossible.
        cout << -1 << nl;
        return;
    }

    ll ans = (1LL << (63 - __builtin_clzll(x))) - 1; // Largest power of 2 minus 1

    ll c = x ^ ans;
    if ((x + ans > c) && (ans + c > x) && (x + c > ans)) {
        cout << ans << nl;
    } else {
        cout << -1 << nl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
