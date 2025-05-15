#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> ans;
        for(int i = 0; i < k - 3; i++){
            ans.push_back(1);
        }
        n = n - k + 3;
        if(n%2){
            ans.push_back(n/2);
            ans.push_back(n/2);
            ans.push_back(1);
        }
        else{
            if(n%4 == 0){
                ans.push_back(n/2);
                ans.push_back(n/4);
                ans.push_back(n/4);
            }
            else{
                ans.push_back(n/2 - 1);
                ans.push_back(n/2 - 1);
                ans.push_back(2);
            }
        }
        for(auto it : ans){
            cout << it << " ";
        }
        cout << endl;
    }
}