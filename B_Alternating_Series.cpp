#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        
            for(int i = 0; i < n; i+= 2){
                v[i] = -1;
            }
            for(int i = 1; i < n; i+= 2){
                v[i] = 3;
            }
            if(v[n - 1] == 3)v[n - 1] = 2;
        

        for(int i = 0; i < n; i++){
            cout << v[i] << " ";
        }
    cout << endl;
}
}