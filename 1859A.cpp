#include <bits/stdc++.h>

#define ll long long
#define nl endl

using namespace std;
void solve (){
    int n;
    cin>>n;
    vector<ll>a(n);

    ll mx;
    for(auto &i:a){
        cin>>i;
    }
    mx=*max_element(a.begin(),a.end());

    vector<ll>ans1;
    vector<ll>ans2;
    
    for(int i=0;i<n;i++){
        if(a[i]!=mx)ans1.push_back(a[i]);
        else ans2.push_back(a[i]);
    }
    if(ans1.size()>0){
        cout<<ans1.size()<<" "<<ans2.size()<<endl;
    
    for(auto i:ans1)cout<<i<<" ";

    for(auto i:ans2)cout<<i<<" ";
    cout<<nl;
}
else cout<<-1<<nl;

}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
     }

    return 0;
}
