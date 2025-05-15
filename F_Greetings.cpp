#include <bits/stdc++.h>
using namespace std;
#define int long long
int binarySearch(vector<long long>& arr, int low, int high, long long x) { 
    if (high >= low) { 
        int mid = low + (high - low) / 2; 
        if (arr[mid] == x) return mid;
        if (arr[mid] > x) return binarySearch(arr, low, mid - 1, x);
        return binarySearch(arr, mid + 1, high, x); 
    } 
    return -1; 
} 

void solve() {
    int n;
    cin >> n;
    
    // Store pairs of input
    vector<pair<long long, long long>> pairs;
    for(int i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;
        pairs.push_back({a, b});
    }
    
    // Sort pairs based on first element
    sort(pairs.begin(), pairs.end());
    
    // Create sorted array of second elements
    vector<long long> secondElements;
    for(int i = 0; i < n; i++) {
        secondElements.push_back(pairs[i].second);
    }
    sort(secondElements.begin(), secondElements.end());
    
    // Count inversions
    long long count = 0;
    for(int i = 0; i < n; i++) {
        int pos = binarySearch(secondElements, 0, secondElements.size()-1, pairs[i].second);
        secondElements.erase(secondElements.begin() + pos);
        count += pos;
    }
    
    cout << count << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}