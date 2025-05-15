#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; cin >> tt;
    while(tt--) {
        int n; cin >> n;
        vector<int>a(n);
        for(auto &i : a) cin >> i;
        sort(a.begin(), a.end());
        int answer = 0;
        for(int i = 0; i + 1 < n; i++) {
            int left = i + 1, right = n - 1, index = i + 1;
            while(left <= right) {
                int mid = (left + right) / 2;
                if(a[i] + a[i + 1] > a[mid]) {
                    index = mid, left = mid + 1;
                }
                else right = mid - 1;
            }
            answer = max(answer,index - i + 1);
        }
        cout << n - answer << "\n";
    }
}