#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v(n - 1);
        for(int i = 0 ; i < n - 1 ; i++){
            cin >> v[i];
        }
        cout << v[0] << " ";
        for(int i = 1; i < v.size() ; i++){
            cout << min(v[i - 1], v[i]) << " ";
        }
        cout << v[n - 2] << endl;
    }
}