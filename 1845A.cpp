//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll n,k,x;
    cin>>n>>k>>x;

    vector<ll>ans;
    ll sum=0;


    if(x==1 && k==1)cout<<"NO"<<nl;
    else if(n==k && n!=x){
        cout<<"YES"<<nl;
        cout<<1<<nl;
        cout<<n<<nl;
    }
    else if(n%2!=0 && x==1){
        if(k==2)cout<<"NO"<<nl;
        else{
            for(ll i=0;i<n;i++){
                ans.push_back(3);
                sum+=3;
                if(sum>n)break;
            }
            ans.pop_back();
            ans.push_back(2);
            cout<<"YES"<<nl;
            cout<<ans.size()<<nl;
            for(ll i:ans){
                cout<<i<<" ";
            }
            cout<<nl;
            
        }
    }
    else if(n%2==0 && x==1){
        cout<<"YES"<<nl;
        for(ll i=0;i<n;i++){
            ans.push_back(2);
            sum+=2;
            if(sum==n)break;
        }
        cout<<sum/2<<nl;
        for(ll i:ans){
            cout<<i<<" ";
        }
        cout<<nl;
    }
    else {
        for(ll i=0;i<n;i++){
            ans.push_back(1);
            sum+=1;
            if(sum==n)break;
        }
        cout<<"YES"<<nl;
        cout<<sum<<nl;
        for(ll i:ans){
        cout<<i<<" ";
        
        }cout<<nl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}