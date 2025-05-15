#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> v(n + 1), b(n + 1);
        int sum = 0;
        
        for(int i = 1; i <= n; i++){
            int x;
            cin >> x;
            sum += x;
            v[i] = sum;
        }
        
        for(int i = 1; i <= n; i++){
            cin >> b[i];
            if(i > 1) {
                b[i] = max(b[i], b[i - 1]);
            }
        }
        long long int maxi = 0;
        for(int i = 1; i <= n && i <= k; i++){
            long long temp = v[i] + (long long)(k - i) * b[i];
            maxi = max(maxi, temp);
        }
        
        cout << maxi << endl;
    }
}
