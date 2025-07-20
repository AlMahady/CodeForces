#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];

        
    }

    
    vector<int> vec2(n + 2);
    vec2[0] = 0; 
    for (int i = 0; i < n; i++) {
        vec2[i + 1] = vec[i];
    }
    vec2[n + 1] = x;  

  
    sort(vec2.begin(), vec2.end());

    int maxdis = 0;
    for (int i = 0; i <= n; i++) {
        maxdis = max(maxdis, vec2[i + 1] - vec2[i]);
    }


    int maxoil = max(maxdis, 2 * (x - vec2[n]));

    cout << maxoil << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
