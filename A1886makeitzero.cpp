#include <bits/stdc++.h>

#define ll long long
#define nl endl

using namespace std;

int main() {
    
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin>>n;
        vector<ll>vec(n);

        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        if(n%2==0){
            cout<<2<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n<<endl;
        }
        else {
            cout<<4<<endl;
            cout<<1<<" "<<n-1<<endl;
            cout<<1<<" "<<n-1<<endl;
            cout<<n-1<<" "<<n<<endl;
            cout<<n-1<<" "<<n<<endl;
        }

    }

    return 0;
}
