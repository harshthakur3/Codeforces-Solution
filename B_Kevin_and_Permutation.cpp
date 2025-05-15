#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> v;

        int max_val = n;
        int min_val = 1;
        
        while (max_val >= min_val) {
            for (int i = 0; i < k - 1 && max_val >= min_val; ++i) {
                v.push_back(max_val);
                max_val--;
            }
            if (max_val >= min_val) {
                v.push_back(min_val);
                min_val++;
            }
        }
        for (int num : v) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
