//Be afraid , Here lives a Monster//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl

void solve(){
    		long long n, k;
		cin >> n >> k;
		vector<long long> v(n * k);
		for (int i = 0; i < n * k; i++)
			cin >> v[i];

		long long p = n * k;

		long long sum = 0;
		while (k--) 
		{
			p -= (n / 2 + 1); 
			sum += v[p]; 
		}
		cout << sum << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}