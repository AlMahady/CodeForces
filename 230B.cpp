// Be afraid, Here lives a Monster //

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

const int N = 1e6 + 1;

void solve(){
    // Sieve of Eratosthenes
    vector<bool> is_prime(N, true);
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i * i < N; i++) {
        if (is_prime[i]) {
            for (ll j = i * i; j < N; j += i) {
                is_prime[j] = false;
            }
        }
    }

    ll n;
    cin >> n;
    vector<ll> vec(n);
    for (ll &x : vec) cin >> x;

    for (ll x : vec) {
        if (x == 1) {
            cout << "NO" << nl;
            continue;
        }
        ll root = sqrt(x);
        if (root * root == x && is_prime[root])
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
