#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<vector<int>> v(n, vector<int>(n));
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> v[i][j];
            }
        }
        
        if(n == 1){
            cout << 1 << endl;
            continue;
        }
        
        vector<int> ans;
        for(int i = 0; i < n; i++){
            int count = 0;
            for(int j = n - 1; j >= 0; j--){
                if(v[i][j] == 1){
                    count++;
                }
                else{
                    break;
                }
            }
            ans.push_back(count);
        }
        

        sort(ans.begin(), ans.end());
        int one=0;
        for(int i=0;i<n;i++)
        {
            if(ans[i]>=one) one++;
        }
 
        cout<<one<<endl;
    }
    return 0;
}