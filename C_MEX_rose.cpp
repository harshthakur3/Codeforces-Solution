#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> v(n), cnt(k, 0);
        int kk = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] == k) kk++;
            if(v[i] < k) cnt[v[i]]++;
        }
        int ans = 0;
        for(int i = 0; i < k; i++){
            if(cnt[i] == 0) ans++;
        }
        cout << max(ans, kk) << endl;
    }
}