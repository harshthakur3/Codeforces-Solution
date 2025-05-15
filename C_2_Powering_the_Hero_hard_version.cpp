#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        priority_queue<int> pq;
        int ans = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        for(int i = 0 ; i < n; i++){
            if(v[i] == 0 && pq.size() != 0){
                int x = pq.top();
                pq.pop();
                ans += x;
            }
            else if(v[i] == 0 && pq.size() == 0){
                continue;
            }
            else{
                pq.push(v[i]);
            }
        }
        cout << ans << endl;
    }
}
