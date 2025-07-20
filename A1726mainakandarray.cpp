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
        ll n;
        cin >> n;
        vector<ll> vec(n);

        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }

        ll high = LLONG_MIN;

        for (int i = 0; i < n - 1; i++) {
            high = max(high, vec[n - 1] - vec[i]);
        }

        for (int i = 1; i < n; i++) {
            high = max(high, vec[i] - vec[0]);
        }

        for (int i = 0; i < n - 1; i++) {
            high = max(high, vec[i] - vec[i + 1]);
        }

        high = max(high, vec[n - 1] - vec[0]);

        cout << high << nl;
    }

    return 0;
}
