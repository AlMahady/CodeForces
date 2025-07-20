#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        ll count = 0;
        char target[10][10];

       
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> target[i][j];
            }
        }

        vector<int> ring_values = {1, 2, 3, 4, 5};

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (target[i][j] == 'X') {
                    int dist = min({i, j, 9 - i, 9 - j}); 
                    count += ring_values[dist];
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
