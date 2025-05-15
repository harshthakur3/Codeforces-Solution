#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int k,n;
        cin>>n>>k;
        vector<vector<int>>v(k);
        for (int i = 0; i < k; i++){
            v[i].push_back(0);
        }
        for (int i = 1; i <= n; i++){
            int x;
            cin>>x;
            v[x-1].push_back(i);
        }
        for (int i = 0; i < k; i++){
            v[i].push_back(n+1);
        }
        vector<vector<int>>diff(k);
        for (int i = 0; i < k; i++){
            for (int j = 1; j < v[i].size(); j++){   
                diff[i].push_back(v[i][j]-v[i][j-1]-1);
            } 
        }
        for (int i = 0; i < k; i++){
            sort(diff[i].rbegin(),diff[i].rend());
        }
        vector<int>x;
        for (int i = 0; i < k; i++){  
           if(diff[i].size()>1)x.push_back(max(diff[i][1],diff[i][0]/2));
               else x.push_back(diff[i][0]/2);
        }
        sort(x.begin(), x.end());
        cout << x[0] << endl;
        
    }
    
    return 0;
}