//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    ll n;
    cin>>n;

    ll x=n,cnt3=0,cnt2=0;
    if(n==1){
        cout<<0<<nl;
        return;
    }
    while(x>1){
        
        if(x%3==0){
            cnt3++;
            x/=3;
        }
        else if(x%2==0){
            cnt2++;
            x/=2;
        }
        else{
            break;
        }
    }
    if(x==1){
            if(cnt3<cnt2)cout<<-1<<nl;
            else {
                cout<<(cnt3-cnt2)+cnt3<<nl;
            }
        }
        else cout<<-1<<nl;

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