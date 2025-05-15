#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v(n + 1, 0), a(n + 1, 0);
        for(int i = 0 ; i < n ; i++){
            int x;
            cin >> x;
            if(x <= n){
                v[x]++;
            }
        }
        for(int i = 1 ; i <= n ; i++){
            for(int j = i ; j <= n ; j += i){
                a[j] += v[i];
            }
        }
        cout << *max_element(a.begin(), a.end()) << endl;
        
    }    
}