#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string str;
    cin >> str;

    int underscore = 0, dash = 0;

    for (char c : str) {
        if (c == '_') 
            underscore++;
        else 
            dash++;
    }

    // If we don't have at least 2 dashes and 1 underscore, it's impossible
    if (dash < 2 || underscore < 1) {
        cout << 0 << endl;
        return;
    }

    // Maximum number of "-_-" subsequences
    long long ans = ((a*a)/4)*b;
            cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
