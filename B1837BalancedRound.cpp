#include <bits/stdc++.h>

#define ll long long
#define nl endl

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        string str;
        cin>>str;

        
        ll result=0;ll high=0;
        for(int i=0;i<n;i++){
            
            if(str[i]==str[i+1]){
                high+=1;
                result=max(high,result);
        }
        else high=0;
      
    }  cout<<result+2<<nl;
}
    return 0;
}
