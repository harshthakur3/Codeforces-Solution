#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        int mx = 0;
        for(auto it: mp){
            mx = max(mx, it.second);
        }
        int count = 0;
        int unused = n - mx;
        while(1){
            if(unused == 0) break;
            count++;
            if(mx <= unused){
                count += mx;
                unused -= mx;
                mx += mx;
                
            }
            else{
                count += unused;
                unused = 0;
                break;
            }
        }
        cout << count << endl;

    }
}