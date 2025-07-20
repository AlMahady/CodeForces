#include<iostream>
#include<vector>
#include<set>
using namespace std;

void solve(){

    int n,k;
    cin>>n>>k;
    set<int>brr;
    bool bol=true;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        brr.insert(arr[i]);
        if(i>0 && arr[i]<arr[i-1]){
            bol=false;
        }
    }
   
    int x=brr.size();

    if(k>1){
        cout<<"YES"<<endl;
    }
    else if(bol){
        cout<<"YES"<<endl;
    }
    else if (k==1 && x==1){
        cout<<"YES"<<endl;
        
    }
    else cout<<"NO"<<endl;




    
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
    
}