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
        ll n,k;
        cin>>n>>k;
        vector<int>vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end());
        for(int i=0;i<n;i++){
            if(vec[i]-vec[i+1]>k){
                vec[i]='/0';
            }
        }
        


    }

    return 0;
}
