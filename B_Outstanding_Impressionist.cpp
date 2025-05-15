//accept hoja bc
//itne tight constrain dene wale ki mkbhd
//pupil before 2025
#include <bits/stdc++.h>
using namespace std;

int lower_bound_bs(const vector<int>& arr, int target) {
    int low = 0, high = arr.size();
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return low;
}

int upper_bound_bs(const vector<int>& arr, int target) {
    int low = 0, high = arr.size();
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= target) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return low;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> ranges(n);
        
        for (int i = 0; i < n; i++) {
            cin >> ranges[i].first >> ranges[i].second;
        }

        map<int, int> freq_fixed;
        for (auto& p : ranges) {
            if (p.first == p.second) {
                freq_fixed[p.first]++;
            }
        }

        vector<int> unique_fixed;
        for (auto& [v, cnt_val] : freq_fixed) {
            unique_fixed.push_back(v);
        }
        
        sort(unique_fixed.begin(), unique_fixed.end());
        
        string s = "";
        for (int i = 0; i < n; i++) {
            int li = ranges[i].first;
            int ri = ranges[i].second;
            bool is_unique = false;

            if (li < ri) {
                int lower = lower_bound_bs(unique_fixed, li);
                int upper = upper_bound_bs(unique_fixed, ri);
                int num_fixed = upper - lower;
                int size = ri - li + 1;
                if (num_fixed < size) {
                    is_unique = true;  
                }
            } else {
                int v = li;
                if (freq_fixed[v] == 1) {
                    is_unique = true;
                }
            }

            if (is_unique) {
                s += '1';
            } else {
                s += '0';
            }
        }

        cout << s << "\n";
        for (auto& [v, cnt_val] : freq_fixed) {
            freq_fixed[v] = 0; 
        }
    }
}

#define int long long
signed main() {
    solve();
}
