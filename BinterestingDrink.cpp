#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end()); 

    int q;
    cin >> q;
    
    
    while (q--) {
        int mi;
        cin >> mi;
        int count = upper_bound(vec.begin(), vec.end(), mi) - vec.begin();
        cout << count << "\n";
    }

    return 0;
}