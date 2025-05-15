#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> v(n + 1);
        if(k%2){
            v[n] = n - 1;
            for(int i = 1; i < n; i++){
                v[i] = n;
            }
        }
        else{
            v[n - 1] = n;
            v[n] = n - 1;
            for(int i = 1; i < n - 1; i++){
                v[i] = n - 1;
            }
        }
        for(int i = 1; i <= n; i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
}