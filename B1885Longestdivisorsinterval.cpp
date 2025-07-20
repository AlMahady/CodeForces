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
        cin>>n;
        ll i=1;
        while(n%i==0){
            i++;
        }
        cout<<i-1<<endl;


    }

    return 0;
}
