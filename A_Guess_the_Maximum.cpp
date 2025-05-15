#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<int> v;
        for(int i = 0; i < n - 1; i++){
            v.push_back(max(a[i], a[i + 1]));
        }
        int mini = v[0];
        for(int i = 0; i < v.size(); i++){
            mini = min(mini,v[i]);
        }
        cout << mini - 1 << endl;
    }
}