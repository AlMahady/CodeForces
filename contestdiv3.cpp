#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,p;
        cin>>n>>k>>p;
        n=abs(n);
        k=abs(k);
        p=abs(p);

        int remain=abs(k)%abs(p);

        int ans1=abs(k/p);

        if(k==0){
            cout<<0<<endl;
            continue;
        }


        if(n*p>k){
            if(remain>0){
                cout<<ans1+1<<endl;
                continue;
            }
            else{
                cout<<ans1<<endl;
                
            }

        }else cout<<-1<<endl;

    }
    

    return 0;
}