#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin>>n;
int ans;
int ans2=0;

    string blocks;
    cin>>blocks;
    for(int i=0;i<n;i++){
        if(blocks[i]=='.' && blocks[i-1]=='.' && blocks[i+1]=='.'){
            ans=2;
            return ans;
        }
        if(blocks[i]=='.'){
            ans2++;
        }

    }
    return ans2;

}

int main(){
    int t;
    cin >>t;
    while(t--){
        //solve();
        cout<<solve()<<endl;
        
    }
    return 0;
}