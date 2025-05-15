#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        long long sum = 0;  
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];  
        }
        if (n < 3) {
            cout << "-1" << endl;
        } else {
            sort(arr, arr + n);
            long long required_avg = arr[n / 2];  
            required_avg = 2LL * n * required_avg + 1;  
            if (sum >= required_avg) {
                cout << "0" << endl;
            } else {
                cout << required_avg - sum << endl;
            }
        }
    }
    return 0;
}
