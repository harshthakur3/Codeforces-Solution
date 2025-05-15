#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, s;
        cin >> n >> s;
        vector<int> v(n), prefix;
        int sum = 0;
        for(int i = 0 ; i < n ; i++){
            cin >> v[i];
        }
        int l = 0;
        int r = 0;
        int len = -1;
        while(r < n){
            sum += v[r];
            if(sum == s){
                len = max(len, r - l + 1);
            }
            if(sum > s){
                sum -= v[l];
                l++;
            }
            r++;
        }
        if(sum < s){
            cout << -1 << endl;
        }
        else{
            cout << n - len << endl;
        }
        
    }
    return 0;
}