#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            mp[v[i]]++;
        }
        vector<int> a;
        for(auto it : mp){
            a.push_back(it.second);
        }
        sort(a.begin(), a.end());
        if(k >= n - 1) cout << 1 << endl;
        else{
        for(int i = 0; i < a.size(); i++){
            if(k >= a[i]){
                k = k - a[i];
                a[a.size() - 1] += a[i];
                a[i] = 0;
            }
            else {
                break;
            }
        }

        int count = 0;
        for(int i = 0; i < a.size(); i++){
            if(a[i] != 0) count++;
        }
        cout << count << endl;
        }
    }
}