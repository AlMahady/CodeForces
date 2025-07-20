#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        ll a, b;
        cin >> a >> b;

        ll xK, yK;
        cin >> xK >> yK;

        ll xQ, yQ;
        cin >> xQ >> yQ;

        vector<pair<ll, ll>> dirs = {
            {a, b}, {a, -b}, {-a, b}, {-a, -b},
            {b, a}, {b, -a}, {-b, a}, {-b, -a}
        };

        set<pair<ll, ll>> attackKing, attackQueen;

 
        for (auto d : dirs) {
            attackKing.insert({xK + d.first, yK + d.second});
        }


        for (auto d : dirs) {
            attackQueen.insert({xQ + d.first, yQ + d.second});
        }

   
        int ans = 0;
        for (auto pos : attackKing) {
            if (attackQueen.count(pos)) {
                ans++;
            }
        }

        cout << ans << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
