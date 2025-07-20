#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main(){
    ll t;
    cin>>t;
    while (t--)
    {
        ll k;
        cin>>k;
        if(k==1){
            cout<<-1<<endl;
            continue;
        }
        if(k==4){
            cout<<"2 4 1 3"<<endl;
            continue;
        }
        if(k==5){
            cout<<"5 1 4 3 2"<<endl;
            continue;
        }
        vector<int>vec(k);
        for(int i=0;i<k;i++){
            vec[i]=i+1;
        }

        for(int i=0;i<k-1;i+=2){
            swap(vec[i],vec[i+1]);
        }
        for(int i:vec){
            cout<<i<<" ";
        }
        cout<<endl;

    }
    

    return 0;
}