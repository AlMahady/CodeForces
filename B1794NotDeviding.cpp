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
        ll n, q;
        cin >> n;
        vector<ll> vec(n);

        for (int i = 0; i < n; i++) {
            cin >> vec[i];
            if(vec[i]==1){
                vec[i]++;
            }
        }
        for(int i=1;i<n;i++){
            if(vec[i]%vec[i-1]==0){
                vec[i]++;
            }

        }
        for(int i:vec){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}
