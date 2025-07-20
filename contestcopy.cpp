#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        string str;
        cin>>str;

        int underscore =0;
        int dash=0;

        for(char c:str){
            if(c=='_') underscore++;
            else dash++;
        }

        if(n<=2 || underscore<1 || dash<2){
            cout<<0<<endl;
            continue;
        }
        long long ans = ((1ll * dash*dash)/4) *underscore;
    
    cout << ans << endl;

    }

    return 0;
}