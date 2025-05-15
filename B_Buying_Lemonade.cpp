#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n, k;
        cin >> n >> k;
        vector<long long int> v(n);
        for(int i = 0; i <n; i++){
            cin >>v[i];
        }
        sort(v.begin(), v.end());
        long long int extra = 0, ans = 0, sum = 0;
        for(int i = 0; i < n; i++){
            ans += (v[i] - sum)*(n - extra);
            if(ans >= k){
                break;
            }
            else{
                extra++;
                sum = v[i];
            }
        }
        long long ansans = k + extra;
        cout << ansans << endl;
        
    }
}