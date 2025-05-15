#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        int pos = 0, neg = 0;
        for(int i = 0; i < n; i += 2){
            pos += v[i];
        }
        for(int i = 1; i < n; i += 2){
            neg += v[i];
        }
        cout << pos - neg << endl;
    }
}