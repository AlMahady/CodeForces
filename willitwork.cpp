#include<bits/stdc++.h>
using namespace std;

vector<int>pairsum(vector<int>vec,int t){
    vector<int>ans;
    int n=vec.size();

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(vec[i]+vec[j]==t){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }

}


int main(){
    int n,t;
    cin>>n>>t;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
               
                vector<int>ans= pairsum(vec,t);

    cout<<ans[0]<<" "<<ans[1]<<endl;







    return 0;
}