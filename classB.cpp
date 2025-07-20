#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(const vector<int>& arr, int target) {
    int l = 0, r = arr.size() - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    sort(arr.begin(), arr.end());

    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        cout << binarySearch(arr, x) << '\n'; 
    }

    return 0;
}
