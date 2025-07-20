#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        map<int, int> mp;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]]++;
        }

        int ans = 0;
        for (auto it = mp.begin(); it != mp.end();) {
            int a = it->first;
            int freq_a = it->second;

            int b = k - a;

            if (mp.find(b) != mp.end()) {
                if (a == b) {
                    ans += freq_a / 2;
                    it = mp.erase(it);
                } else {
                    int freq_b = mp[b];
                    ans += min(freq_a, freq_b);
                    mp.erase(b);
                    it = mp.erase(it);
                }
            } else {
                ++it;
            }
        }

        cout << ans << endl;
    }
    return 0;
}