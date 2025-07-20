#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long>vec(n);
    for(int i=0;i<n ;i++){
        cin>>vec[i];
    }
    sort(vec.rbegin(),vec.rend());

    int ans=0,count=0;
    for(int i:vec){
        //cout<<i<<endl;
        if(ans<0){
            break;
        }
        ans+=i;
        count++;
        
    }
    cout<<count<<endl;


    return 0;


}
