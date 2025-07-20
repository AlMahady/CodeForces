#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

string can_reduce_to_x(int n, int x, vector<int>& a) {
    int total_sum = accumulate(a.begin(), a.end(), 0);
    
    if (total_sum % n != 0)
        return "NO";   
    while (n > 1) {
        bool found = false;
        
        for (int k = 2; k <= n; ++k) { 
            if (n % k == 0) { 
                int group_size = n / k;
                
                if (total_sum % k == 0) {  
                    total_sum /= k;
                    n = group_size;
                    found = true;
                    break;
                }
            }
        }
        
        if (!found)
            return "NO";
    }
    
    return (total_sum == x) ? "YES" : "NO";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) 
            cin >> a[i];
        cout << can_reduce_to_x(n, x, a) << endl;
    }
    return 0;
}
