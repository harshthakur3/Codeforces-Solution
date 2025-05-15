#include <bits/stdc++.h>
using namespace std;


int bs_dec(int l, int r, int arr[], int target) {
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == target) {
            return 1;
        }
        if (arr[mid] > target) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return 0;
}


int bs_inc(int l, int r, int arr[], int target) {
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == target) {
            return 1; 
        }
        if (arr[mid] < target) {
            l = mid + 1; 
        } else {
            r = mid - 1;
        }
    }
    return 0; 
}

int main() {
    int n, q;
    cin >> n >> q;
    int arr[n];
    
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr,arr+n);
   
    int large_index = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[large_index]) {
            large_index = i;
        }
    }

  
    while (q--) {
        int target;
        cin >> target;
        
        
        bool found = bs_inc(0, n - 1, arr, target);

        if (found) {
            cout << "found" << endl;
        } else {
            cout << "not found" << endl;
        }
    }

    return 0;
}
