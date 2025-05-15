#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        bool allPositive = true;
        bool allNegative = true;
        
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] <= 0) allPositive = false;
            if(v[i] >= 0) allNegative = false;
        }
        if(allPositive || allNegative){
            cout << 0 << endl;
            continue;
        }
        
        long long sum = 0;
        int count = 0;
        map<long long, int> mp;  
        mp[0] = 1;  
        
        for(int i = 0; i < n; i++){
            sum += v[i];
            
            if(mp.find(sum) != mp.end()){  
                count++;  
                mp.clear();  
                mp[0] = 1;  
                sum = 0;  
            }
            else{
                mp[sum]++;  
            }
        }
        cout << count << endl;
    }
    return 0;
}