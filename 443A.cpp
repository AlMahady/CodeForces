//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    string s;
    getline(cin, s);

    set<char>x;

    for(int i=0;i<s.length();i++){
        if(s[i]>=97 && s[i]<=122){
            x.insert(s[i]);
        }
    }
    cout<<x.size()<<nl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

        solve();
    
    return 0;
}