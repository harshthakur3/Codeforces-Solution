#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, maxi = 0;
        cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            mp[v[i]]++;
            maxi = max(maxi, mp[v[i]]);
        }
        cout << n - maxi << endl;
    }
}