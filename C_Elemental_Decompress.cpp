#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n), a(n);
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            a[i] = v[i];
            mp[v[i]]++;
        }
        bool flag = true;
        if(mp[1] > 1){
            flag = false;
        }
        sort(a.begin(), a.end());
        for(int i = 0; i < n; i++){
            if(a[i] < i + 1){
                flag = false;
                break;
            }
        }
        map<int, int> mp1, mp2;
        if(flag){
            cout <<"YES" << endl;
            for(int i = 0; i < n; i++){
                
            }
        }
        else{
            cout << "NO" << endl;
        }
    }
}