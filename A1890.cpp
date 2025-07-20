#include<bits/stdc++.h>
#define ll long long
#define nl endl
using namespace std;
void solve(){
    ll n;
    cin>>n;
    vector<ll>vec(n);
    set<ll>distinct;
    map<ll,ll>frequency;
    for(int i=0;i<n;i++){
        cin>>vec[i];
        // distinct.insert(vec[i]);
        // frequency[vec[i]]++;
    }
    for(int i=0;i<n;i++){
        frequency[vec[i]]++;
    }
    // int s=distinct.size();
    if(frequency.size()>=3){
        cout<<"NO"<<endl;
    }
    else{
        ll s1=frequency.begin()->second;
        ll s2=frequency.rbegin()->second;
        if(s1==s2){
            cout<<"YES"<<nl;
        }
        else if(n%2==1 && abs(s1-s2)==1){
            cout<<"YES"<<nl;

        }else cout<<"NO"<<nl;

    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}