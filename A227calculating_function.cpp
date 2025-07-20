#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

#define ll long long



using namespace std;


int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];

        }
        bool bol=true;
        int x=n+1;
        for(int i=0;i<n;i++){
            // if(vec[0]<=x){
            //     bol=false;
            // }
            if(vec[i]<=2*max(i,n-i-1)){
                bol=false;
                break;
            }
        }
        if(!bol){
            cout<<"NO"<<endl;
        }else cout<<"YES"<<endl;
    }


    return 0 ;
}
