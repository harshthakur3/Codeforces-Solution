#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> x(n), y(n), diff;
        for(int i = 0; i < n; i ++){
            cin >> x[i];
        }
        for(int i = 0; i < n; i ++){
            cin >> y[i];
        }
        for(int i = 0; i < n; i ++){
            diff.push_back(y[i] - x[i]);
        }
        sort(diff.begin(), diff.end());
        
        int l = 0, r = n - 1, count = 0;
        while(l < r){
            if(diff[l] + diff[r] >= 0){
                count++;
                l++;
                r--;
            }
            else{
                l++;
            }
        }
        cout << count << endl;

    }
}