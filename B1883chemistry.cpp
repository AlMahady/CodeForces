#include <bits/stdc++.h>

#define ll long long
#define nl endl

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;
        string x;
        cin >> x;

        map<char, int> mp;
        for (char c : x) {
            mp[c]++;
        }

        ll odd = 0;
        for (auto it : mp) {
            if (it.second % 2 == 1) { 
                odd++;
            }
        }


        if (odd - 1 <= k) {
            cout << "YES" << nl;
        } else {
            cout << "NO" << nl;
        }
    }

    return 0;
}
