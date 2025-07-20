#include<bits/stdc++.h>
#define ll long long
#define vii vector<pair<int , int>>
#define pii pair<ll,ll>



using namespace std;




void solve(){
    int t;
    cin>>t;

    while(t--){
        ll a,b;
        cin>>a>>b;

        ll xk,yk;
        cin>>xk>>yk;

        ll xq,yq;
        cin>>xq>>yq;

        vii dirs={{a,b},{a,-b},{-a,b},{-a,-b},
                 {b,a},{b,-a},{-b,a},{-a,-b}};

        set<pii>st1,st2;

        for(auto d:dirs){
            int x=xk+d.first;
            int y=yk+d.second;

            st1.insert(make_pair(x,y));

            x=xq+d.first;
            y=yq+d.second;

            st2.insert(make_pair(x,y));


        }
        int ans=0;
        for(auto pos:st1){
            if(st2.find(pos)!=st2.end()){
                ans++;
            }

        }
        cout<<ans<<endl;





    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();

    return 0;
}