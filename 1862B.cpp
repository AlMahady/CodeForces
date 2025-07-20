#include <bits/stdc++.h>

#define ll long long
#define nl endl

using namespace std;
void solve (){
    int n;
    cin>>n;
    vector<ll>a(n);
    for(auto &i:a)cin>>i;

    vector<ll>ans;
    ans.push_back(a[0]);
    for(int i=1;i<n;i++){
        if(a[i]>=a[i-1]){
            ans.push_back(a[i]);
        }else{
            ans.push_back(1);
            ans.push_back(a[i]);
        }
    }
    cout<<ans.size()<<nl;
    for(auto i:ans)cout<<i<<" ";
    cout<<nl;

}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
        
        
     }

    return 0;
}
