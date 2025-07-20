#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    while (true) {
        ll N, Q;
        cin >> N >> Q;
        if (N == 0 && Q == 0) break;

        vector<int> vec(N);
        for (int i = 0; i < N; i++) {
            cin >> vec[i];
        }

 
        sort(vec.begin(), vec.end());

        vector<int> vec2(Q);
        for (int i = 0; i < Q; i++) {
            cin >> vec2[i];
        }

        for (int i = 0; i < Q; i++) {
            int l = 0, r = N - 1;
            int ans = -1;
            while (l <= r) {
                int mid = (l + r) / 2;
                if (vec[mid] == vec2[i]) {
                    ans = mid;
                    break;
                }
                else if (vec[mid] < vec2[i]) {
                    l = mid + 1;
                }
                else {
                    r = mid - 1;
                }
            }

            if (ans != -1)
                cout << vec2[i] << " found at " << ans+1 << endl;
            else
                cout << vec2[i] << " not found" << endl;
        }
    }
    return 0;
}
