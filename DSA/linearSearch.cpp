//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

int LinearSearch(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x)return i;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int y;
    cin>>y;
    int index = LinearSearch(arr,n,y);

    cout<<arr[index]<<nl;


    return 0;
}