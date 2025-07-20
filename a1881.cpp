#include<bits/stdc++.h>
#define ll long long
#define nl endl
using namespace std;
void solve(){

    ll n,m;
    cin>>n>>m;

    string x;//x have size of n
    string s;//s have size of m
    cin>>x>>s;
    int f=0;
    ll count=0;
    int r=10;

    while(r--){ 
        if(x.find(s)!=string::npos){
            f=1;
            break;

        }
        else{
            x.append(x);
            count++;
        }

    }
    if(f==1){
        cout<<count<<nl;
    }
    else cout<<-1<<nl;
    

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