#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> a(n), b(r), c(n - l + 1);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < r; i++){
            b[i] = a[i];
        }
        for(int i = l - 1; i < n; i++){
            c[i - l + 1] = a[i];
        }
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());
        int sum1 = 0, sum2 = 0;
        int k = r - l + 1;
        for(int i = 0; i < k; i++){
            sum1 += b[i];
            sum2 += c[i];
        }
        cout << min(sum1,sum2) << endl;
        
    }
}