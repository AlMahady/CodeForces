#include <bits/stdc++.h>

#define ll long long
#define nl endl

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<int,string>m;
    m[1]="abc";
    m[3]="abcd";
    m[5]="acd";
    m.insert({4,"afg"});
    map<int,string>::iterator it;
    for(it=m.begin(); it !=m.end();++it){
cout<<(*it).first<<" "<<(*it).second<<nl;
    }
    
    return 0;
}
